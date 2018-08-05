// Generated by gencpp from file dgvmsg/EncounterV.msg
// DO NOT EDIT!


#ifndef DGVMSG_MESSAGE_ENCOUNTERV_H
#define DGVMSG_MESSAGE_ENCOUNTERV_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <dgvmsg/Encounter.h>

namespace dgvmsg
{
template <class ContainerAllocator>
struct EncounterV_
{
  typedef EncounterV_<ContainerAllocator> Type;

  EncounterV_()
    : cnt()  {
    }
  EncounterV_(const ContainerAllocator& _alloc)
    : cnt(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::dgvmsg::Encounter_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::dgvmsg::Encounter_<ContainerAllocator> >::other >  _cnt_type;
  _cnt_type cnt;




  typedef boost::shared_ptr< ::dgvmsg::EncounterV_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dgvmsg::EncounterV_<ContainerAllocator> const> ConstPtr;

}; // struct EncounterV_

typedef ::dgvmsg::EncounterV_<std::allocator<void> > EncounterV;

typedef boost::shared_ptr< ::dgvmsg::EncounterV > EncounterVPtr;
typedef boost::shared_ptr< ::dgvmsg::EncounterV const> EncounterVConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dgvmsg::EncounterV_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dgvmsg::EncounterV_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dgvmsg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'dgvmsg': ['/home/pc-robot/Workspace/demo/roscpp/src/dgvmsg/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dgvmsg::EncounterV_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dgvmsg::EncounterV_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dgvmsg::EncounterV_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dgvmsg::EncounterV_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dgvmsg::EncounterV_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dgvmsg::EncounterV_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dgvmsg::EncounterV_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2da812357f3c8c503991e46840b0a125";
  }

  static const char* value(const ::dgvmsg::EncounterV_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2da812357f3c8c50ULL;
  static const uint64_t static_value2 = 0x3991e46840b0a125ULL;
};

template<class ContainerAllocator>
struct DataType< ::dgvmsg::EncounterV_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dgvmsg/EncounterV";
  }

  static const char* value(const ::dgvmsg::EncounterV_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dgvmsg::EncounterV_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Encounter[] cnt\n\
================================================================================\n\
MSG: dgvmsg/Encounter\n\
# This is a message to hold data from an IMU (Inertial Measurement Unit)\n\
#\n\
# Accelerations should be in m/s^2 (not in g's), and rotational velocity should be in rad/sec\n\
#\n\
# If the covariance of the measurement is known, it should be filled in (if all you know is the \n\
# variance of each measurement, e.g. from the datasheet, just put those along the diagonal)\n\
# A covariance matrix of all zeros will be interpreted as \"covariance unknown\", and to use the\n\
# data a covariance will have to be assumed or gotten from some other source\n\
#\n\
# If you have no estimate for one of the data elements (e.g. your IMU doesn't produce an orientation \n\
# estimate), please set element 0 of the associated covariance matrix to -1\n\
# If you are interpreting this message, please check for a value of -1 in the first element of each \n\
# covariance matrix, and disregard the associated estimate.\n\
\n\
Header header\n\
\n\
int32 devadd\n\
time now\n\
uint32 encounter\n\
uint16 DrivStatus\n\
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

  static const char* value(const ::dgvmsg::EncounterV_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dgvmsg::EncounterV_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cnt);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EncounterV_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dgvmsg::EncounterV_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dgvmsg::EncounterV_<ContainerAllocator>& v)
  {
    s << indent << "cnt[]" << std::endl;
    for (size_t i = 0; i < v.cnt.size(); ++i)
    {
      s << indent << "  cnt[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::dgvmsg::Encounter_<ContainerAllocator> >::stream(s, indent + "    ", v.cnt[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DGVMSG_MESSAGE_ENCOUNTERV_H
