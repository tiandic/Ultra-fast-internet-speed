<!--
 * @encode: utf-8
 * @Date: 2025-07-25 18:50:56
 * @LastEditTime: 2025-07-30 14:35:34
 * @FilePath: /Ultra-fast internet speed/README.md
-->
# 一个简单的小程序
让你手机上显示的实时网速看上去很快!
![示例图片](./Screenshot_20250725-184921243.jpg)
![示例图片](./Screenshot_2025-07-30-14-29-29-089_com.termux.jpg)

## 使用
下载[termux](https://github.com/termux/termux-app/releases/)

运行命令 `pkg install git clang -y && git clone https://github.com/tiandic/Ultra-fast-internet-speed.git`

然后再运行命令`cd Ultra-fast-internet-speed && chmod +x run.sh && ./run.sh`

就能看到超高的网速了!

你可以适当调整`h.h`文件中的数字来调整网速
如果运行`./run.sh`后发现没有看到网速的明显变化可以适当降低`h.h`文件中的数字

它只是通过建立一个本地的连接传输数据来达到一个看上去网速很快的效果,实际上并不会消耗流量