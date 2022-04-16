#include <iostream>
using namespace cv;
using namespace std;
int main(){
   cout << "Built with OpenCV " << CV_VERSION << endl;
   Mat image;
   Mat src;
   VideoCapture capture;
   capture.open(2);
   capture >> src;
   bool isColor = (src.type() == CV_8UC3);
   VideoWriter writer;
   int codec = VideoWriter::fourcc('M', 'P', '4', 'V');
   double fps = 15.0;
   string filename = "live.mp4";
   Size sizeFrame(640,480);
   writer.open(C:\Users\RAJENDRAN\Desktop\DS-IQ-002-ObjectDetect-Video.mp4, codec, fps, sizeFrame, isColor);
   cout << "Started writing video... " << endl;
   for (int i = 0 ; i < 60 ; i ++)
   {
      capture >> image;
      Mat xframe;
      resize(image,xframe,sizeFrame);
      writer.write(xframe);

   }
   cout << "Write complete !" << endl;
   capture.release();
   writer.release();
   return 0;
}
