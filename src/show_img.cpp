#include <iostream>
#include <opencv2/highgui/highgui.hpp>

int main() {
    cv::Mat img = cv::imread("/home/vicrrs/projects/gcc_ComputerVision/imgs/003_Lenna.png");

    cv::imshow("Window", img);
    cv::waitKey(0);

    return 0;
}

