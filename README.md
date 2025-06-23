# game2d

*simples game in development using [SDL2](https://libsdl.org/), creating game basic, a project of **studies**.*

# Ubuntu dependencies linux
~~~
sudo apt-get install build-essential git make \
pkg-config cmake ninja-build gnome-desktop-testing libasound2-dev libpulse-dev \
libaudio-dev libjack-dev libsndio-dev libx11-dev libxext-dev \
libxrandr-dev libxcursor-dev libxfixes-dev libxi-dev libxss-dev libxtst-dev \
libxkbcommon-dev libdrm-dev libgbm-dev libgl1-mesa-dev libgles2-mesa-dev \
libegl1-mesa-dev libdbus-1-dev libibus-1.0-dev libudev-dev
~~~
[Link dependencies build](https://github.com/libsdl-org/SDL/blob/main/docs/README-linux.md#build-dependencies)

**build linux**

~~~bash
mkdir build
cd build
cmake ..
make
./Game2D
~~~