#ifndef CPP_IMAGE_H
#define CPP_IMAGE_H
#include <string>
#include <iostream>
struct Dimensions 
{
    int width;
    int height;
    
};

struct Aperture 
{
    int apertureSize;
    
};

struct Exposure 
{
    int shutterSpeed;
    
};

class Image {
private:
    std::string file_Name;
    std::string image_type;
    std::string created_date;
    double size;
    std::string author_name;
    Dimensions image_dimension;
    int width, height;
    Aperture aperture;
    Exposure exposure;
    int ISO_value;
    bool flash_enabled;
public:
    Image(const std::string &file_Name, const std::string &image_type, const std::string &created_date, double size,
                 const std::string &author_name, int width, int height, int apertureSize, int shutterSpeed,
                 int ISO_value, bool flash_enabled);

    const std::string &getfile_Name() const;

    void setfile_Name(const std::string &file_Name);

    const std::string &getimage_type() const;

    void setimage_type(const std::string &image_type);

    const std::string &getcreated_date() const;

    void setcreated_date(const std::string &created_date);

    double getSize() const;

    void setSize(double size);

    const std::string &getauthor_name() const;

    void setauthor_name(const std::string &author_name);

    const Dimensions &getimage_dimension() const;

    void setimage_dimension(int width, int height);

    const Aperture &getAperture() const;

    void setAperture(int apertureSize);

    const Exposure &getExposure() const;

    void setExposure(int exposureTime);

    int getISO_value() const;

    void setISO_value(int ISO_value);

    bool isflash_enabled() const;

    void setflash_enabled(bool flash_enabled);

}; 
#endif