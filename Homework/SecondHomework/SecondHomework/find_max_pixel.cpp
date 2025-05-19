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

    // �̹��� �ε� Ȯ��
    if (img.empty()) {
        printf("�̹����� �ҷ��� �� �����ϴ�.\n");
        return -1;
    }

    // �ִ� ��Ⱚ �ʱ�ȭ
    unsigned char maxVal = 0;

    // ��ü �ȼ� ��ȸ�ϸ� �ִ� ��Ⱚ ã��
    for (int i = 0; i < img.rows; i++) {
        for (int j = 0; j < img.cols; j++) {
            unsigned char pixel = img.at<unsigned char>(i, j);
            if (pixel > maxVal)
                maxVal = pixel;
        }
    }

    // �ִ� ��� ���
    printf("�ִ� ��Ⱚ: %d\n", maxVal);

    return 0;
}