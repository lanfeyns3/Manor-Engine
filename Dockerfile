FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && \
    apt-get upgrade -y && \
    apt-get install -y --no-install-recommends \
        gcc g++ cmake ninja-build \
        build-essential pkg-config \
        libx11-dev libxrandr-dev libxi-dev libxinerama-dev libxcursor-dev \
        libgl1-mesa-dev \
        && apt-get clean && \
        rm -rf /var/lib/apt/lists/*

WORKDIR /root

COPY src/ ./src/
COPY vendor/ ./vendor/
COPY CMakeLists.txt ./

RUN mkdir build

WORKDIR /root/build

# Use the correct CMake flags
RUN cmake -G Ninja -DGLFW_BUILD_WAYLAND=OFF -DGLFW_BUILD_X11=ON ..
RUN ninja

CMD ["./Editor"]