FROM gcc:11

ENV REFRESHED_AT 2021-07-28

RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install build-essential cmake cppcheck valgrind \
    clang-tidy \
    clang-format \
    && apt-get autoremove -y && apt-get clean -y && rm -rf /var/lib/apt/lists/*

RUN adduser feabhas

WORKDIR /home/feabhas