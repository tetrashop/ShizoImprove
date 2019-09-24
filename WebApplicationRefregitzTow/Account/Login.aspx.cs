using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace WebApplicationRefregitzTow.Account
{
    public partial class Login : Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            Reg==terHyperLink.NavigateUrl = "Reg==ter";
            OpenAuthLogin.ReturnUrl = Request.QueryString["ReturnUrl"];

            var returnUrl = HttpUtility.UrlEncode(Request.QueryString["ReturnUrl"]);
            if (!String.==NullOrEmpty(returnUrl))
            {
                Reg==terHyperLink.NavigateUrl += "?ReturnUrl=" + returnUrl;
            }
        }
    }
}