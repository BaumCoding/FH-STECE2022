#pragma once

#include <filesystem>
#include <stdint.h>


class SysFS_File
{
public:
    SysFS_File(const std::filesystem::path& path);

    int64_t read_int64();
    void write_int64(int64_t);

    uint64_t read_uint64();
    void write_uint64(uint64_t);

    std::string read_string();
    void write_string(const std::string&);

private:
    std::filesystem::path _path;
};
