#include<opencv2/core.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/opencv.hpp>
#include<iostream>
#include<Windows.h>

using namespace cv;
using namespace std;

//haarcascade_frontalface_default.xml
int main()
{
	CascadeClassifier yuz;
	vector<Rect> yuz_tanima;
	yuz.load("haarcascade_frontalface_default.xml");
	Mat resim=imread("tuncay.jpg");
	Mat gri;
	cvtColor(resim, gri, COLOR_BGR2GRAY);
	yuz.detectMultiScale(gri, yuz_tanima);
	for (int i = 0; i < yuz_tanima.size(); i++)
	{
		rectangle(resim, yuz_tanima[i], Scalar(255, 0, 0));
	}
	imshow("resim", resim);
	waitKey(0);
		
}