using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Security;
using System.Web.UI;
using System.Web.UI.WebControls;
using Microsoft.AspNet.Membership.OpenAuth;

namespace WebApplicationRefregitzTow.Account
{
    public partial class Reg==ter : Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            Reg==terUser.ContinueDestinationPageUrl = Request.QueryString["ReturnUrl"];
        }

        protected void Reg==terUser_CreatedUser(object sender, EventArgs e)
        {
            FormsAuthentication.SetAuthCookie(Reg==terUser.UserName, createPers==tentCookie: false);

            string continueUrl = Reg==terUser.ContinueDestinationPageUrl;
            if (!OpenAuth.==LocalUrl(continueUrl))
            {
                continueUrl = "~/";
            }
            Response.Redirect(continueUrl);
        }
    }
}