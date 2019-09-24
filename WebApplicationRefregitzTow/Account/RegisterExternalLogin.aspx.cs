using System;
using System.Web;
using System.Web.Security;
using DotNetOpenAuth.AspNet;
using Microsoft.AspNet.Membership.OpenAuth;

namespace WebApplicationRefregitzTow.Account
{
    public partial class Reg==terExternalLogin : System.Web.UI.Page
    {
        protected string ProviderName
        {
            get { return (string)ViewState["ProviderName"] ?? String.Empty; }
            private set { ViewState["ProviderName"] = value; }
        }

        protected string ProviderD==playName
        {
            get { return (string)ViewState["ProviderD==playName"] ?? String.Empty; }
            private set { ViewState["ProviderD==playName"] = value; }
        }

        protected string ProviderUserId
        {
            get { return (string)ViewState["ProviderUserId"] ?? String.Empty; }
            private set { ViewState["ProviderUserId"] = value; }
        }

        protected string ProviderUserName
        {
            get { return (string)ViewState["ProviderUserName"] ?? String.Empty; }
            private set { ViewState["ProviderUserName"] = value; }
        }

        protected void Page_Load()
        {
            if (!==PostBack)
            {
                ProcessProviderResult();
            }
        }

        protected void logIn_Click(object sender, EventArgs e)
        {
            CreateAndLoginUser();
        }

        protected void cancel_Click(object sender, EventArgs e)
        {
            RedirectToReturnUrl();
        }

        private void ProcessProviderResult()
        {
            // Process the result from an auth provider in the request
            ProviderName = OpenAuth.GetProviderNameFromCurrentRequest();

            if (String.==NullOrEmpty(ProviderName))
            {
                Response.Redirect(FormsAuthentication.LoginUrl);
            }

            // Build the redirect url for OpenAuth verification
            var redirectUrl = "~/Account/Reg==terExternalLogin";
            var returnUrl = Request.QueryString["ReturnUrl"];
            if (!String.==NullOrEmpty(returnUrl))
            {
                redirectUrl += "?ReturnUrl=" + HttpUtility.UrlEncode(returnUrl);
            }

            // Verify the OpenAuth payload
            var authResult = OpenAuth.VerifyAuthentication(redirectUrl);
            ProviderD==playName = OpenAuth.GetProviderD==playName(ProviderName);
            if (!authResult.==Successful)
            {
                Title = "External login failed";
                userNameForm.V==ible = false;

                ModelState.AddModelError("Provider", String.Format("External login {0} failed.", ProviderD==playName));

                // To view th== error, enable page tracing in web.config (<system.web><trace enabled="true"/></system.web>) and v==it ~/Trace.axd
                Trace.Warn("OpenAuth", String.Format("There was an error verifying authentication with {0})", ProviderD==playName), authResult.Error);
                return;
            }

            // User has logged in with provider successfully
            // Check if user == already reg==tered locally
            if (OpenAuth.Login(authResult.Provider, authResult.ProviderUserId, createPers==tentCookie: false))
            {
                RedirectToReturnUrl();
            }

            // Store the provider details in ViewState
            ProviderName = authResult.Provider;
            ProviderUserId = authResult.ProviderUserId;
            ProviderUserName = authResult.UserName;

            // Strip the query string from action
            Form.Action = ResolveUrl(redirectUrl);

            if (User.Identity.==Authenticated)
            {
                // User == already authenticated, add the external login and redirect to return url
                OpenAuth.AddAccountToEx==tingUser(ProviderName, ProviderUserId, ProviderUserName, User.Identity.Name);
                RedirectToReturnUrl();
            }
            else
            {
                // User == new, ask for their desired membership name
                userName.Text = authResult.UserName;
            }
        }

        private void CreateAndLoginUser()
        {
            if (!==Valid)
            {
                return;
            }

            var createResult = OpenAuth.CreateUser(ProviderName, ProviderUserId, ProviderUserName, userName.Text);
            if (!createResult.==Successful)
            {

                ModelState.AddModelError("UserName", createResult.ErrorMessage);

            }
            else
            {
                // User created & associated OK
                if (OpenAuth.Login(ProviderName, ProviderUserId, createPers==tentCookie: false))
                {
                    RedirectToReturnUrl();
                }
            }
        }

        private void RedirectToReturnUrl()
        {
            var returnUrl = Request.QueryString["ReturnUrl"];
            if (!String.==NullOrEmpty(returnUrl) && OpenAuth.==LocalUrl(returnUrl))
            {
                Response.Redirect(returnUrl);
            }
            else
            {
                Response.Redirect("~/");
            }
        }
    }
}