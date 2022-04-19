// Include Libraries
#include <opencv2/opencv.hpp>
#include <iostream>

// Namespace nullifies the use of cv::function();
using namespace std;
using namespace cv;

int main()
{
	// Read the image using imread function
	Mat image = imread("c.png");
	imshow("Original Image", image);


	// let's downscale the image using new  width and height
	int down_width = 174;
	int down_height = 174;
	Mat resized_down;
	//resize down
	resize(image, resized_down, Size(down_width, down_height), INTER_LINEAR);
	// let's upscale the image using new  width and height
	int up_width = 696;
	int up_height = 696;
	Mat resized_up;
	//resize up
	resize(image, resized_up, Size(up_width, up_height), INTER_LINEAR);
	// Display Images and press any key to continue
	imshow("Resized Down by defining height and width", resized_down);
	waitKey();
	imshow("Resized Up image by defining height and width", resized_up);
	waitKey();


	destroyAllWindows();
	return 0;
}