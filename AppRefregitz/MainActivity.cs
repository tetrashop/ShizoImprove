using Android.App;
using Android.Widget;
using Android.OS;
using System;
using Android.Graphics.Drawables;
using Android.Content;
using Android.Graphics;
using Android.Graphics.Drawables.Shapes;
using Android.Widget;
using System.IO;
namespace AppRefregitz
{
    [Activity(Label = "AppRefregitz", MainLauncher = true, Icon = "@drawable/icon")]
    public class MainActivity : Activity
    {
        private readonly ShapeDrawable _shape;
        private readonly ShapeDrawable _shape2;
        private Bitmap _bit;
        private bool toDraw = false;
        protected override void OnCreate(Bundle bundle)
        {
            base.OnCreate(bundle);
            SetContentView(new DrawingThings(this));
            // Set our view from the "main" layout resource
            // SetContentView (Resource.Layout.Main);
        }
        
    }
}

