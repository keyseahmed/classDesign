#include "picture.h"

// Setters and Getters for each member variables
Image::Image(const std::string &file_Name, const std::string &image_type, const std::string &created_date, double size,
             const std::string &author_name, int width, int height, int apertureSize, int shutterSpeed,
             int ISO_value, bool flash_enabled)
{
    setfile_Name(file_Name);
    setimage_type(image_type);
    setcreated_date(created_date);
    setSize(size);
    setauthor_name(author_name);
    setimage_dimension(width, height);
    setAperture(apertureSize);
    setExposure(shutterSpeed);
    setISO_value(ISO_value);
    this->flash_enabled = flash_enabled;
}

const std::string &Image::getfile_Name() const {
    return file_Name;
}

void Image::setfile_Name(const std::string &file_Name) {
    if (file_Name.empty()) {
        std::cout << "No valid name is provided!" << std::endl;
        this->file_Name = "Invalid name";
    } else this->file_Name = file_Name;
}

const std::string &Image::getimage_type() const {
    return image_type;
}

void Image::setimage_type(const std::string &image_type) {
    if (image_type == "PNG" || image_type == "GIF" || image_type == "JPEG")
        this->image_type = image_type;
    else {
        std::cout << "No valid image type!" << std::endl;
        this->image_type = "Invalid Type";
    }
}

const std::string &Image::getcreated_date() const {
    return created_date;
}

void Image::setcreated_date(const std::string &created_date) {
    if (created_date.empty()) {
        std::cout << "No valid date is provided!" << std::endl;
        this->created_date = "01-01-01";
    } else this->created_date = created_date;
}

double Image::getSize() const {
    return size;
}

void Image::setSize(double size) {
    if (size < 0) size = 0;
    this->size = size;
}

const std::string &Image::getauthor_name() const {
    return author_name;
}

void Image::setauthor_name(const std::string &author_name) {
    if (author_name.empty()) {
        std::cout << "No valid author name is provided" << std::endl;
        this->author_name = "Invalid author name";
    } else this->author_name = author_name;
}

const Dimensions &Image::getimage_dimension() const {
    return this->image_dimension;
}

void Image::setimage_dimension(int width, int height) {
    if (width < 0) width = 0;
    if (height < 0) height = 0;
    Image::image_dimension.width = width;
    Image::image_dimension.height = height;
}

const Aperture &Image::getAperture() const {
    return this->aperture;
}

void Image::setAperture(int apertureSize) {
    if (apertureSize <= 0) apertureSize = 1;
    this->aperture.apertureSize = apertureSize;
}

const Exposure &Image::getExposure() const {
    return this->exposure;
}

void Image::setExposure(int shutterSpeed) {
    if (shutterSpeed <= 0) shutterSpeed = 0;
    this->exposure.shutterSpeed = shutterSpeed;
}

int Image::getISO_value() const {
    return ISO_value;
}

void Image::setISO_value(int ISO_value) {
    this->ISO_value = ISO_value;
}

bool Image::isflash_enabled() const {
    return flash_enabled;
}

void Image::setflash_enabled(bool flash_enabled) {
    this->flash_enabled = flash_enabled;
}

std::ostream &operator<<(std::ostream &os, const Dimensions &d) {
    os << "Width: " << d.width << ", " << "Height: " << d.height << '\n';
    return os;
}

std::ostream &operator<<(std::ostream &os, const Aperture &a) {
    os << "Aperture size: f/" << a.apertureSize << '\n';
    return os;
}

std::ostream &operator<<(std::ostream &os, const Exposure &e) {
    os << "Exposure time: 1/" << e.shutterSpeed << '\n';
    return os;
}