FROM ubuntu:24.04

ENV DEBIAN_FRONTEND noninteractive
RUN apt update && \
    apt upgrade -y && \
    apt install -y --no-install-recommends \
        locales \
        build-essential \
        g++ \
        cmake \
        vim \
        cpputest \
    && \
    apt --purge remove -y build-essential && \
    apt clean  && \
    apt autoremove -y && \
    rm -rf /var/lib/apt/lists/* && \
    localedef -f UTF-8 -i ja_JP ja_JP.UTF-8

WORKDIR /root/workspace
