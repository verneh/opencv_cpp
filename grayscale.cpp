// To execute write this in terminal.
// need to run this make to rebuild this in your makefile.

// Include Libraries
#include <opencv2/opencv.hpp>
#include <iostream>

// Namespace nullifies the use of cv::function();
using namespace std;
using namespace cv;

int main( int argc, char** argv )
{
    // Read an image and turn it in grayscale.
    Mat img_grayscale = imread("c.png", 0);

    // Create window.
    namedWindow( "grayscale image", WINDOW_AUTOSIZE );

    // Show image inside.
    imshow("grayscale image", img_grayscale);

    // Wait for a keystroke.
    waitKey(0);

    // Destroy all windows created.
    destroyAllWindows();

    // Write image as grayscale.
    imwrite("grayscale.jpg", img_grayscale);

}
