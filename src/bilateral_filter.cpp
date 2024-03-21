#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgcodecs.hpp> // Include for newer OpenCV versions
#include <opencv2/imgproc.hpp>

int main() {
    std::string imagePath = "/home/vicrrs/projects/gcc_ComputerVision/data/imgs/003_Lenna.png";
    cv::Mat img = cv::imread(imagePath, cv::IMREAD_COLOR);

    cv::Mat bilateralImg;

    cv::bilateralFilter(img, bilateralImg, 15, 95, 45);

    if (img.empty()) {
        std::cerr << "Error: unable to load image at" << imagePath << std::endl; 
    };

    cv::imshow("Window", img);
    cv::imshow("Bilateral", bilateralImg);
    cv::waitKey(0);

    return 0;

}

