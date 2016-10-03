using System;
using Android.Graphics.Drawables;
using Android.Content;
using Android.Graphics;
using Android.Graphics.Drawables.Shapes;
using Android.Widget;
using System.IO;

namespace AppRefregitz
{
    public class DrawingThings : Android.Views.View
    {
        private readonly ShapeDrawable _shape;
        private readonly ShapeDrawable _shape2;
        private Bitmap _bit;
        private bool toDraw = false;
        private Paint paint;

        public DrawingThings(Context context)
            : base(context)
        {
            paint = new Paint();
            paint.SetARGB(255, 200, 255, 0);
            paint.SetStyle(Paint.Style.Stroke);
            paint.StrokeWidth = 4;

            _shape = new ShapeDrawable(new OvalShape());
            _shape.Paint.Set(paint);

            _shape.SetBounds(20, 20, 300, 200);

            paint.SetARGB(255, 0, 0, 255);
            _shape2 = new ShapeDrawable(new OvalShape());
            _shape2.Paint.Set(paint);
            _shape2.SetBounds(100, 400, 200, 500);

        }

        protected override void OnDraw(Canvas canvas)
        {
            _shape.Draw(canvas);
            _shape2.Draw(canvas);
            _bit = BitmapFactory.DecodeResource(Resources, Resource.Drawable.board);
            canvas.DrawBitmap(_bit, 100, 200, null);
        }
    }

}