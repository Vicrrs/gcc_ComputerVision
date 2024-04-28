#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>

int main() {
    cv::Mat img = cv::imread("/home/vicrrs/Projetos_github/gcc_ComputerVision/data/imgs/002_placa.PNG");
    if (img.empty()) {
        std::cout << "Could not read the image" << std::endl;
        return 1;
    }

    cv::Mat dilateMat;

    cv::Mat elementKernel;

    cv::dilate(img, dilateMat, elementKernel, cv::Point(-1, -1), 1);

    cv::imshow("Eroded", dilateMat);
    cv::imshow("Window", img);
    cv::waitKey(0);

    return 0;
}
