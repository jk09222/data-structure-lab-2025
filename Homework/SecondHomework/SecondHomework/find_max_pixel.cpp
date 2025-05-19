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

    // 이미지 로딩 확인
    if (img.empty()) {
        printf("이미지를 불러올 수 없습니다.\n");
        return -1;
    }

    // 최대 밝기값 초기화
    unsigned char maxVal = 0;

    // 전체 픽셀 순회하며 최대 밝기값 찾기
    for (int i = 0; i < img.rows; i++) {
        for (int j = 0; j < img.cols; j++) {
            unsigned char pixel = img.at<unsigned char>(i, j);
            if (pixel > maxVal)
                maxVal = pixel;
        }
    }

    // 최대 밝기 출력
    printf("최대 밝기값: %d\n", maxVal);

    return 0;
}