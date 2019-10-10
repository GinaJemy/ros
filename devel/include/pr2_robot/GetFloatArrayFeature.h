// Generated by gencpp from file pr2_robot/GetFloatArrayFeature.msg
// DO NOT EDIT!


#ifndef PR2_ROBOT_MESSAGE_GETFLOATARRAYFEATURE_H
#define PR2_ROBOT_MESSAGE_GETFLOATARRAYFEATURE_H

#include <ros/service_traits.h>


#include <pr2_robot/GetFloatArrayFeatureRequest.h>
#include <pr2_robot/GetFloatArrayFeatureResponse.h>


namespace pr2_robot
{

struct GetFloatArrayFeature
{

typedef GetFloatArrayFeatureRequest Request;
typedef GetFloatArrayFeatureResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetFloatArrayFeature
} // namespace pr2_robot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::pr2_robot::GetFloatArrayFeature > {
  static const char* value()
  {
    return "c90ae3a91de76e55487209150231b931";
  }

  static const char* value(const ::pr2_robot::GetFloatArrayFeature&) { return value(); }
};

template<>
struct DataType< ::pr2_robot::GetFloatArrayFeature > {
  static const char* value()
  {
    return "pr2_robot/GetFloatArrayFeature";
  }

  static const char* value(const ::pr2_robot::GetFloatArrayFeature&) { return value(); }
};


// service_traits::MD5Sum< ::pr2_robot::GetFloatArrayFeatureRequest> should match 
// service_traits::MD5Sum< ::pr2_robot::GetFloatArrayFeature > 
template<>
struct MD5Sum< ::pr2_robot::GetFloatArrayFeatureRequest>
{
  static const char* value()
  {
    return MD5Sum< ::pr2_robot::GetFloatArrayFeature >::value();
  }
  static const char* value(const ::pr2_robot::GetFloatArrayFeatureRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::pr2_robot::GetFloatArrayFeatureRequest> should match 
// service_traits::DataType< ::pr2_robot::GetFloatArrayFeature > 
template<>
struct DataType< ::pr2_robot::GetFloatArrayFeatureRequest>
{
  static const char* value()
  {
    return DataType< ::pr2_robot::GetFloatArrayFeature >::value();
  }
  static const char* value(const ::pr2_robot::GetFloatArrayFeatureRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::pr2_robot::GetFloatArrayFeatureResponse> should match 
// service_traits::MD5Sum< ::pr2_robot::GetFloatArrayFeature > 
template<>
struct MD5Sum< ::pr2_robot::GetFloatArrayFeatureResponse>
{
  static const char* value()
  {
    return MD5Sum< ::pr2_robot::GetFloatArrayFeature >::value();
  }
  static const char* value(const ::pr2_robot::GetFloatArrayFeatureResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::pr2_robot::GetFloatArrayFeatureResponse> should match 
// service_traits::DataType< ::pr2_robot::GetFloatArrayFeature > 
template<>
struct DataType< ::pr2_robot::GetFloatArrayFeatureResponse>
{
  static const char* value()
  {
    return DataType< ::pr2_robot::GetFloatArrayFeature >::value();
  }
  static const char* value(const ::pr2_robot::GetFloatArrayFeatureResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PR2_ROBOT_MESSAGE_GETFLOATARRAYFEATURE_H
