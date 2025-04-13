#include <iostream>
#include <opencv2/opencv.hpp>
#include <stdio.h>

//int main() { //
	//std::cout << "OpenCV Version :" << CV_VERSION;
//} 

int main() {
	cv::Mat img = cv::imread("Lenna.png", cv::IMREAD_GRAYSCALE);
	cv::imshow("lenna window", img);
	cv::waitKey(0);

    if (img.empty()) {
        printf("이미지를 불러올 수 없습니다.\n");
        return -1;
    }

    unsigned char max = 0;

    
    for (int i = 0; i < img.rows; i++) {
        for (int j = 0; j < img.cols; j++) {
            unsigned char pixel = img.at<unsigned char>(i, j);
            if (pixel > max)
                max = pixel;
        }
    }

    
    printf("최대 밝기값: %d\n", max);

    return 0;

}