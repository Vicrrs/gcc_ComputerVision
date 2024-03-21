#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>

int main() {
    std::string imagePath = "/home/vicrrs/projects/gcc_ComputerVision/data/imgs/003_Lenna.png";
    
    cv::Mat img = cv::imread(imagePath, cv::IMREAD_COLOR);
    cv::Mat medianImg;

    cv::medianBlur(img, medianImg, 5);

    cv::imshow("Window", img);
    cv::imshow("Median", medianImg);
    cv::waitKey(0);

    return 0;
}

