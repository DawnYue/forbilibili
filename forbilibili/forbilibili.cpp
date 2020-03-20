#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
int main()
{
	//读取本地的一张图片便显示出来
	//imread后面的文件路径可以根据自己的实际路径修改
	Mat img = imread("E:/1.png");
	imshow("test", img);
	//等待用户按键
	waitKey(0);
	return 0;
}
/*
https://blog.csdn.net/a1570853041/article/details/79702380  OpenCV-3.4.1+VS2017的安装与配置
https://docs.microsoft.com/en-us/visualstudio/releasenotes/vs2017-relnotes#-visual-studio-2017-version-15921-   
https://opencv.org/opencv-3-4-1/
https://pc.qq.com/detail/13/detail_22693.html   git 下载
https://blog.csdn.net/qq_36556893/article/details/87977280   GitHub插件的安装和使用
*/