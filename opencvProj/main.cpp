#include <opencv2/opencv.hpp>

using namespace cv;

int main() {
	/*Mat imggray = imread("E:\\opencv\\source\\1.png");
	//cvtColor(imggray, imggray, CV_RGB2GRAY);
	imshow("123", imggray);
	waitKey(0);*/

	Mat srcImage = imread("E:\\opencv\\source\\1.png");
	if (srcImage.empty()) {
		printf("Can not load image,Check the whether the image exists.\n");
		return -1;
	}
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstImage;
	erode(srcImage, dstImage, element);
	//namedWindow("Lena", CV_WINDOW_AUTOSIZE);
	imshow("Test opencv", dstImage);
	waitKey(0);
	return 0;
}