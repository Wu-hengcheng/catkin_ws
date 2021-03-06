// Generated by gencpp from file laikago_msgs/MotorState.msg
// DO NOT EDIT!


#ifndef LAIKAGO_MSGS_MESSAGE_MOTORSTATE_H
#define LAIKAGO_MSGS_MESSAGE_MOTORSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace laikago_msgs
{
template <class ContainerAllocator>
struct MotorState_
{
  typedef MotorState_<ContainerAllocator> Type;

  MotorState_()
    : mode(0)
    , position(0.0)
    , velocity(0.0)
    , torque(0.0)
    , temperature(0.0)
    , iReserve(0)
    , fReserve(0.0)  {
    }
  MotorState_(const ContainerAllocator& _alloc)
    : mode(0)
    , position(0.0)
    , velocity(0.0)
    , torque(0.0)
    , temperature(0.0)
    , iReserve(0)
    , fReserve(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _mode_type;
  _mode_type mode;

   typedef float _position_type;
  _position_type position;

   typedef float _velocity_type;
  _velocity_type velocity;

   typedef float _torque_type;
  _torque_type torque;

   typedef float _temperature_type;
  _temperature_type temperature;

   typedef int32_t _iReserve_type;
  _iReserve_type iReserve;

   typedef float _fReserve_type;
  _fReserve_type fReserve;





  typedef boost::shared_ptr< ::laikago_msgs::MotorState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::laikago_msgs::MotorState_<ContainerAllocator> const> ConstPtr;

}; // struct MotorState_

typedef ::laikago_msgs::MotorState_<std::allocator<void> > MotorState;

typedef boost::shared_ptr< ::laikago_msgs::MotorState > MotorStatePtr;
typedef boost::shared_ptr< ::laikago_msgs::MotorState const> MotorStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::laikago_msgs::MotorState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::laikago_msgs::MotorState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::laikago_msgs::MotorState_<ContainerAllocator1> & lhs, const ::laikago_msgs::MotorState_<ContainerAllocator2> & rhs)
{
  return lhs.mode == rhs.mode &&
    lhs.position == rhs.position &&
    lhs.velocity == rhs.velocity &&
    lhs.torque == rhs.torque &&
    lhs.temperature == rhs.temperature &&
    lhs.iReserve == rhs.iReserve &&
    lhs.fReserve == rhs.fReserve;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::laikago_msgs::MotorState_<ContainerAllocator1> & lhs, const ::laikago_msgs::MotorState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace laikago_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::laikago_msgs::MotorState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::laikago_msgs::MotorState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::laikago_msgs::MotorState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::laikago_msgs::MotorState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::laikago_msgs::MotorState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::laikago_msgs::MotorState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::laikago_msgs::MotorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "45138c3d7a603ce307daeb241ea2207a";
  }

  static const char* value(const ::laikago_msgs::MotorState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x45138c3d7a603ce3ULL;
  static const uint64_t static_value2 = 0x07daeb241ea2207aULL;
};

template<class ContainerAllocator>
struct DataType< ::laikago_msgs::MotorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "laikago_msgs/MotorState";
  }

  static const char* value(const ::laikago_msgs::MotorState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::laikago_msgs::MotorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 mode            # motor current mode \n"
"float32 position     # motor current position（rad）\n"
"float32 velocity     # motor current speed（rad/s）\n"
"float32 torque       # current estimated output torque（N*m）\n"
"float32 temperature  # motor temperature（slow conduction of temperature leads to lag）\n"
"int32 iReserve\n"
"float32 fReserve\n"
;
  }

  static const char* value(const ::laikago_msgs::MotorState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::laikago_msgs::MotorState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mode);
      stream.next(m.position);
      stream.next(m.velocity);
      stream.next(m.torque);
      stream.next(m.temperature);
      stream.next(m.iReserve);
      stream.next(m.fReserve);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MotorState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::laikago_msgs::MotorState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::laikago_msgs::MotorState_<ContainerAllocator>& v)
  {
    s << indent << "mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mode);
    s << indent << "position: ";
    Printer<float>::stream(s, indent + "  ", v.position);
    s << indent << "velocity: ";
    Printer<float>::stream(s, indent + "  ", v.velocity);
    s << indent << "torque: ";
    Printer<float>::stream(s, indent + "  ", v.torque);
    s << indent << "temperature: ";
    Printer<float>::stream(s, indent + "  ", v.temperature);
    s << indent << "iReserve: ";
    Printer<int32_t>::stream(s, indent + "  ", v.iReserve);
    s << indent << "fReserve: ";
    Printer<float>::stream(s, indent + "  ", v.fReserve);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LAIKAGO_MSGS_MESSAGE_MOTORSTATE_H
