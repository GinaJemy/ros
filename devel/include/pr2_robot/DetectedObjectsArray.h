// Generated by gencpp from file pr2_robot/DetectedObjectsArray.msg
// DO NOT EDIT!


#ifndef PR2_ROBOT_MESSAGE_DETECTEDOBJECTSARRAY_H
#define PR2_ROBOT_MESSAGE_DETECTEDOBJECTSARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <pr2_robot/DetectedObject.h>

namespace pr2_robot
{
template <class ContainerAllocator>
struct DetectedObjectsArray_
{
  typedef DetectedObjectsArray_<ContainerAllocator> Type;

  DetectedObjectsArray_()
    : objects()  {
    }
  DetectedObjectsArray_(const ContainerAllocator& _alloc)
    : objects(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::pr2_robot::DetectedObject_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::pr2_robot::DetectedObject_<ContainerAllocator> >::other >  _objects_type;
  _objects_type objects;





  typedef boost::shared_ptr< ::pr2_robot::DetectedObjectsArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_robot::DetectedObjectsArray_<ContainerAllocator> const> ConstPtr;

}; // struct DetectedObjectsArray_

typedef ::pr2_robot::DetectedObjectsArray_<std::allocator<void> > DetectedObjectsArray;

typedef boost::shared_ptr< ::pr2_robot::DetectedObjectsArray > DetectedObjectsArrayPtr;
typedef boost::shared_ptr< ::pr2_robot::DetectedObjectsArray const> DetectedObjectsArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pr2_robot::DetectedObjectsArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pr2_robot::DetectedObjectsArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pr2_robot

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'pr2_robot': ['/home/gina/robot_ws/src/RoboND-Perception-Project/pr2_robot/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pr2_robot::DetectedObjectsArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pr2_robot::DetectedObjectsArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_robot::DetectedObjectsArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_robot::DetectedObjectsArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_robot::DetectedObjectsArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_robot::DetectedObjectsArray_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pr2_robot::DetectedObjectsArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "84d084cecf89edbe15e16f7d85aab2e1";
  }

  static const char* value(const ::pr2_robot::DetectedObjectsArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x84d084cecf89edbeULL;
  static const uint64_t static_value2 = 0x15e16f7d85aab2e1ULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_robot::DetectedObjectsArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pr2_robot/DetectedObjectsArray";
  }

  static const char* value(const ::pr2_robot::DetectedObjectsArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pr2_robot::DetectedObjectsArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "DetectedObject[] objects\n\
\n\
================================================================================\n\
MSG: pr2_robot/DetectedObject\n\
\n\
string label\n\
sensor_msgs/PointCloud2 cloud\n\
\n\
================================================================================\n\
MSG: sensor_msgs/PointCloud2\n\
# This message holds a collection of N-dimensional points, which may\n\
# contain additional information such as normals, intensity, etc. The\n\
# point data is stored as a binary blob, its layout described by the\n\
# contents of the \"fields\" array.\n\
\n\
# The point cloud data may be organized 2d (image-like) or 1d\n\
# (unordered). Point clouds organized as 2d images may be produced by\n\
# camera depth sensors such as stereo or time-of-flight.\n\
\n\
# Time of sensor data acquisition, and the coordinate frame ID (for 3d\n\
# points).\n\
Header header\n\
\n\
# 2D structure of the point cloud. If the cloud is unordered, height is\n\
# 1 and width is the length of the point cloud.\n\
uint32 height\n\
uint32 width\n\
\n\
# Describes the channels and their layout in the binary data blob.\n\
PointField[] fields\n\
\n\
bool    is_bigendian # Is this data bigendian?\n\
uint32  point_step   # Length of a point in bytes\n\
uint32  row_step     # Length of a row in bytes\n\
uint8[] data         # Actual point data, size is (row_step*height)\n\
\n\
bool is_dense        # True if there are no invalid points\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: sensor_msgs/PointField\n\
# This message holds the description of one point entry in the\n\
# PointCloud2 message format.\n\
uint8 INT8    = 1\n\
uint8 UINT8   = 2\n\
uint8 INT16   = 3\n\
uint8 UINT16  = 4\n\
uint8 INT32   = 5\n\
uint8 UINT32  = 6\n\
uint8 FLOAT32 = 7\n\
uint8 FLOAT64 = 8\n\
\n\
string name      # Name of field\n\
uint32 offset    # Offset from start of point struct\n\
uint8  datatype  # Datatype enumeration, see above\n\
uint32 count     # How many elements in the field\n\
";
  }

  static const char* value(const ::pr2_robot::DetectedObjectsArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pr2_robot::DetectedObjectsArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.objects);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DetectedObjectsArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr2_robot::DetectedObjectsArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pr2_robot::DetectedObjectsArray_<ContainerAllocator>& v)
  {
    s << indent << "objects[]" << std::endl;
    for (size_t i = 0; i < v.objects.size(); ++i)
    {
      s << indent << "  objects[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::pr2_robot::DetectedObject_<ContainerAllocator> >::stream(s, indent + "    ", v.objects[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PR2_ROBOT_MESSAGE_DETECTEDOBJECTSARRAY_H
