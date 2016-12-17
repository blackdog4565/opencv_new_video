#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;

int main(int argc, char *argv[])
{
    cv::VideoCapture cap("new.mp4");

    cv::Mat frame;
    cv::namedWindow("video");

    cvMoveWindow("video", 0, 0);

    while ( cap.isOpened() )
    {       
        cap >> frame;

        if(frame.empty()) break;

        cv::imshow("video", frame);

        if(cv::waitKey(30) >= 0) break;
    }

    return 0;
}
