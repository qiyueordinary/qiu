// Generated by gencpp from file msgs_demo/LaserScan.msg
// DO NOT EDIT!


#ifndef MSGS_DEMO_MESSAGE_LASERSCAN_H
#define MSGS_DEMO_MESSAGE_LASERSCAN_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace msgs_demo
{
template <class ContainerAllocator>
struct LaserScan_
{
  typedef LaserScan_<ContainerAllocator> Type;

  LaserScan_()
    : header()
    , angle_min(0.0)
    , angle_max(0.0)
    , angle_increment(0.0)
    , time_increment(0.0)
    , scan_time(0.0)
    , range_min(0.0)
    , range_max(0.0)
    , ranges()
    , intensities()  {
    }
  LaserScan_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , angle_min(0.0)
    , angle_max(0.0)
    , angle_increment(0.0)
    , time_increment(0.0)
    , scan_time(0.0)
    , range_min(0.0)
    , range_max(0.0)
    , ranges(_alloc)
    , intensities(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _angle_min_type;
  _angle_min_type angle_min;

   typedef float _angle_max_type;
  _angle_max_type angle_max;

   typedef float _angle_increment_type;
  _angle_increment_type angle_increment;

   typedef float _time_increment_type;
  _time_increment_type time_increment;

   typedef float _scan_time_type;
  _scan_time_type scan_time;

   typedef float _range_min_type;
  _range_min_type range_min;

   typedef float _range_max_type;
  _range_max_type range_max;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _ranges_type;
  _ranges_type ranges;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _intensities_type;
  _intensities_type intensities;





  typedef boost::shared_ptr< ::msgs_demo::LaserScan_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::msgs_demo::LaserScan_<ContainerAllocator> const> ConstPtr;

}; // struct LaserScan_

typedef ::msgs_demo::LaserScan_<std::allocator<void> > LaserScan;

typedef boost::shared_ptr< ::msgs_demo::LaserScan > LaserScanPtr;
typedef boost::shared_ptr< ::msgs_demo::LaserScan const> LaserScanConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::msgs_demo::LaserScan_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::msgs_demo::LaserScan_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace msgs_demo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'msgs_demo': ['/home/wind/catkin_ws/src/ROS-Academy-for-Beginners/msgs_demo/msg', '/home/wind/catkin_ws/devel/share/msgs_demo/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::msgs_demo::LaserScan_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::msgs_demo::LaserScan_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msgs_demo::LaserScan_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msgs_demo::LaserScan_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msgs_demo::LaserScan_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msgs_demo::LaserScan_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::msgs_demo::LaserScan_<ContainerAllocator> >
{
  static const char* value()
  {
    return "90c7ef2dc6895d81024acba2ac42f369";
  }

  static const char* value(const ::msgs_demo::LaserScan_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x90c7ef2dc6895d81ULL;
  static const uint64_t static_value2 = 0x024acba2ac42f369ULL;
};

template<class ContainerAllocator>
struct DataType< ::msgs_demo::LaserScan_<ContainerAllocator> >
{
  static const char* value()
  {
    return "msgs_demo/LaserScan";
  }

  static const char* value(const ::msgs_demo::LaserScan_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::msgs_demo::LaserScan_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#平面内的激光测距扫描数据，注意此消息类型仅仅适配激光测距设备\n\
#如果有其他类型的测距设备(如声呐)，需要另外创建不同类型的消息\n\
\n\
#位置：sensor_msgs/LaserScan.msg\n\
\n\
Header header			#时间戳为接收到第一束激光的时间\n\
float32 angle_min		#扫描开始时的角度(单位为rad)\n\
float32 angle_max		#扫描结束时的角度(单位为rad)\n\
float32 angle_increment	#两次测量之间的角度增量(单位为rad)\n\
\n\
float32 time_increment	#两次测量之间的时间增量(单位为s)\n\
\n\
float32 scan_time		#两次扫描之间的时间间隔(单位为s)\n\
\n\
float32 range_min		#距离最小值(m)\n\
float32 range_max		#距离最大值(m)\n\
\n\
float32[] ranges		#测距数据(m,如果数据不在最小数据和最大数据之间，则抛弃)\n\
\n\
float32[] intensities	#强度，具体单位由测量设备确定，如果仪器没有强度测量，则数组为空即可\n\
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
";
  }

  static const char* value(const ::msgs_demo::LaserScan_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::msgs_demo::LaserScan_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.angle_min);
      stream.next(m.angle_max);
      stream.next(m.angle_increment);
      stream.next(m.time_increment);
      stream.next(m.scan_time);
      stream.next(m.range_min);
      stream.next(m.range_max);
      stream.next(m.ranges);
      stream.next(m.intensities);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LaserScan_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::msgs_demo::LaserScan_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::msgs_demo::LaserScan_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "angle_min: ";
    Printer<float>::stream(s, indent + "  ", v.angle_min);
    s << indent << "angle_max: ";
    Printer<float>::stream(s, indent + "  ", v.angle_max);
    s << indent << "angle_increment: ";
    Printer<float>::stream(s, indent + "  ", v.angle_increment);
    s << indent << "time_increment: ";
    Printer<float>::stream(s, indent + "  ", v.time_increment);
    s << indent << "scan_time: ";
    Printer<float>::stream(s, indent + "  ", v.scan_time);
    s << indent << "range_min: ";
    Printer<float>::stream(s, indent + "  ", v.range_min);
    s << indent << "range_max: ";
    Printer<float>::stream(s, indent + "  ", v.range_max);
    s << indent << "ranges[]" << std::endl;
    for (size_t i = 0; i < v.ranges.size(); ++i)
    {
      s << indent << "  ranges[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.ranges[i]);
    }
    s << indent << "intensities[]" << std::endl;
    for (size_t i = 0; i < v.intensities.size(); ++i)
    {
      s << indent << "  intensities[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.intensities[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MSGS_DEMO_MESSAGE_LASERSCAN_H
