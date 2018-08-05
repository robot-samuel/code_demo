// Generated by gencpp from file dgvmsg/Twist.msg
// DO NOT EDIT!


#ifndef DGVMSG_MESSAGE_TWIST_H
#define DGVMSG_MESSAGE_TWIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <dgvmsg/Vector3.h>
#include <dgvmsg/Vector3.h>

namespace dgvmsg
{
template <class ContainerAllocator>
struct Twist_
{
  typedef Twist_<ContainerAllocator> Type;

  Twist_()
    : linear()
    , angular()  {
    }
  Twist_(const ContainerAllocator& _alloc)
    : linear(_alloc)
    , angular(_alloc)  {
  (void)_alloc;
    }



   typedef  ::dgvmsg::Vector3_<ContainerAllocator>  _linear_type;
  _linear_type linear;

   typedef  ::dgvmsg::Vector3_<ContainerAllocator>  _angular_type;
  _angular_type angular;




  typedef boost::shared_ptr< ::dgvmsg::Twist_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dgvmsg::Twist_<ContainerAllocator> const> ConstPtr;

}; // struct Twist_

typedef ::dgvmsg::Twist_<std::allocator<void> > Twist;

typedef boost::shared_ptr< ::dgvmsg::Twist > TwistPtr;
typedef boost::shared_ptr< ::dgvmsg::Twist const> TwistConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dgvmsg::Twist_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dgvmsg::Twist_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dgvmsg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'dgvmsg': ['/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dgvmsg::Twist_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dgvmsg::Twist_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dgvmsg::Twist_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dgvmsg::Twist_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dgvmsg::Twist_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dgvmsg::Twist_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dgvmsg::Twist_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9f195f881246fdfa2798d1d3eebca84a";
  }

  static const char* value(const ::dgvmsg::Twist_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9f195f881246fdfaULL;
  static const uint64_t static_value2 = 0x2798d1d3eebca84aULL;
};

template<class ContainerAllocator>
struct DataType< ::dgvmsg::Twist_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dgvmsg/Twist";
  }

  static const char* value(const ::dgvmsg::Twist_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dgvmsg::Twist_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This expresses velocity in free space broken into its linear and angular parts.\n\
Vector3  linear\n\
Vector3  angular\n\
\n\
================================================================================\n\
MSG: dgvmsg/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::dgvmsg::Twist_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dgvmsg::Twist_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.linear);
      stream.next(m.angular);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Twist_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dgvmsg::Twist_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dgvmsg::Twist_<ContainerAllocator>& v)
  {
    s << indent << "linear: ";
    s << std::endl;
    Printer< ::dgvmsg::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.linear);
    s << indent << "angular: ";
    s << std::endl;
    Printer< ::dgvmsg::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.angular);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DGVMSG_MESSAGE_TWIST_H
