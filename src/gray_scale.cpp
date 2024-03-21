#include <iostream>
#include <opencv2/highgui/highgui.hpp>

int main() {
    cv::Mat img = cv::imread("/home/vicrrs/projects/gcc_ComputerVision/data/imgs/003_Lenna.png", cv::IMREAD_GRAYSCALE);

    cv::imshow("Window", img);
    cv::waitKey(0);

    return 0;
}
