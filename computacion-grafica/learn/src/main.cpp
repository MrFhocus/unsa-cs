#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

int main(int argc, char **argv)
{
  if (argc < 2)
  {
    std::cout << "Usage: " << argv[0] << " image.png" << std::endl;
    return -1;
  }

  std::string imageName = argv[1];

  cv::Mat image = cv::imread(imageName, cv::IMREAD_COLOR_RGB);

  std::vector<cv::Mat> channels;
  cv::split(image, channels);

  cv::Mat channelR, channelG, channelB;

  cv::Mat zero = cv::Mat::zeros(image.rows, image.cols, CV_8UC1);

  cv::merge(std::vector<cv::Mat>{zero, zero, channels[2]}, channelR);
  cv::merge(std::vector<cv::Mat>{zero, channels[1], zero}, channelG);
  cv::merge(std::vector<cv::Mat>{channels[0], zero, zero}, channelB);

  cv::imshow("imageRGB", image);
  cv::imshow("imageR", channelR);
  cv::imshow("imageG", channelG);
  cv::imshow("imageB", channelB);

  cv::waitKey(0);
  return 0;
}