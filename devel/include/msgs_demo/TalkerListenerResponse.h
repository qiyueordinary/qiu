// Generated by gencpp from file msgs_demo/TalkerListenerResponse.msg
// DO NOT EDIT!


#ifndef MSGS_DEMO_MESSAGE_TALKERLISTENERRESPONSE_H
#define MSGS_DEMO_MESSAGE_TALKERLISTENERRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace msgs_demo
{
template <class ContainerAllocator>
struct TalkerListenerResponse_
{
  typedef TalkerListenerResponse_<ContainerAllocator> Type;

  TalkerListenerResponse_()
    : response()  {
    }
  TalkerListenerResponse_(const ContainerAllocator& _alloc)
    : response(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _response_type;
  _response_type response;





  typedef boost::shared_ptr< ::msgs_demo::TalkerListenerResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::msgs_demo::TalkerListenerResponse_<ContainerAllocator> const> ConstPtr;

}; // struct TalkerListenerResponse_

typedef ::msgs_demo::TalkerListenerResponse_<std::allocator<void> > TalkerListenerResponse;

typedef boost::shared_ptr< ::msgs_demo::TalkerListenerResponse > TalkerListenerResponsePtr;
typedef boost::shared_ptr< ::msgs_demo::TalkerListenerResponse const> TalkerListenerResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::msgs_demo::TalkerListenerResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::msgs_demo::TalkerListenerResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace msgs_demo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'msgs_demo': ['/home/wind/catkin_ws/src/ROS-Academy-for-Beginners/msgs_demo/msg', '/home/wind/catkin_ws/devel/share/msgs_demo/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::msgs_demo::TalkerListenerResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::msgs_demo::TalkerListenerResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msgs_demo::TalkerListenerResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msgs_demo::TalkerListenerResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msgs_demo::TalkerListenerResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msgs_demo::TalkerListenerResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::msgs_demo::TalkerListenerResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6de314e2dc76fbff2b6244a6ad70b68d";
  }

  static const char* value(const ::msgs_demo::TalkerListenerResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6de314e2dc76fbffULL;
  static const uint64_t static_value2 = 0x2b6244a6ad70b68dULL;
};

template<class ContainerAllocator>
struct DataType< ::msgs_demo::TalkerListenerResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "msgs_demo/TalkerListenerResponse";
  }

  static const char* value(const ::msgs_demo::TalkerListenerResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::msgs_demo::TalkerListenerResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string response\n\
\n\
";
  }

  static const char* value(const ::msgs_demo::TalkerListenerResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::msgs_demo::TalkerListenerResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.response);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TalkerListenerResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::msgs_demo::TalkerListenerResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::msgs_demo::TalkerListenerResponse_<ContainerAllocator>& v)
  {
    s << indent << "response: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.response);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MSGS_DEMO_MESSAGE_TALKERLISTENERRESPONSE_H
