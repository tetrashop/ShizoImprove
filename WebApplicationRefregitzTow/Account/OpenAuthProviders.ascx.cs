using System;
using System.Collections.Generic;
using System.Web;
using Microsoft.AspNet.Membership.OpenAuth;

namespace WebApplicationRefregitzTow.Account
{
    public partial class OpenAuthProviders : System.Web.UI.UserControl
    {
        protected void Page_Load(object sender, EventArgs e)
        {

            if (IsPostBack)
            {
                var provider = Request.Form["provider"];
                if (provider == null)
                {
                    return;
                }

                var redirectUrl = "~/Account/RegisterExternalLogin";
                if (!String.IsNullOrEmpty(ReturnUrl))
                {
                    var resolvedReturnUrl = ResolveUrl(ReturnUrl);
                    redirectUrl += "?ReturnUrl=" + HttpUtility.UrlEncode(resolvedReturnUrl);
                }

                OpenAuth.RequestAuthentication(provider, redirectUrl);
            }
        }



        public string ReturnUrl { get; set; }


//#pragma warning disable CS3002 // Return type of 'OpenAuthProviders.GetProviderNames()' is not CLS-compliant
#pragma warning disable CS3002 // Return type of 'OpenAuthProviders.GetProviderNames()' is not CLS-compliant
        public IEnumerable<ProviderDetails> GetProviderNames()
#pragma warning restore CS3002 // Return type of 'OpenAuthProviders.GetProviderNames()' is not CLS-compliant
//#pragma warning restore CS3002 // Return type of 'OpenAuthProviders.GetProviderNames()' is not CLS-compliant
        {
            return OpenAuth.AuthenticationClients.GetAll();
        }

    }
}