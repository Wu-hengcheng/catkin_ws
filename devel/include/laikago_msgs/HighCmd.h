// Generated by gencpp from file laikago_msgs/HighCmd.msg
// DO NOT EDIT!


#ifndef LAIKAGO_MSGS_MESSAGE_HIGHCMD_H
#define LAIKAGO_MSGS_MESSAGE_HIGHCMD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <laikago_msgs/LED.h>

namespace laikago_msgs
{
template <class ContainerAllocator>
struct HighCmd_
{
  typedef HighCmd_<ContainerAllocator> Type;

  HighCmd_()
    : levelFlag(0)
    , mode(0)
    , forwardSpeed(0.0)
    , sideSpeed(0.0)
    , rotateSpeed(0.0)
    , bodyHeight(0.0)
    , footRaiseHeight(0.0)
    , yaw(0.0)
    , pitch(0.0)
    , roll(0.0)
    , led()
    , wirelessRemote()
    , crc(0)  {
      wirelessRemote.assign(0);
  }
  HighCmd_(const ContainerAllocator& _alloc)
    : levelFlag(0)
    , mode(0)
    , forwardSpeed(0.0)
    , sideSpeed(0.0)
    , rotateSpeed(0.0)
    , bodyHeight(0.0)
    , footRaiseHeight(0.0)
    , yaw(0.0)
    , pitch(0.0)
    , roll(0.0)
    , led()
    , wirelessRemote()
    , crc(0)  {
  (void)_alloc;
      led.assign( ::laikago_msgs::LED_<ContainerAllocator> (_alloc));

      wirelessRemote.assign(0);
  }



   typedef uint8_t _levelFlag_type;
  _levelFlag_type levelFlag;

   typedef uint8_t _mode_type;
  _mode_type mode;

   typedef float _forwardSpeed_type;
  _forwardSpeed_type forwardSpeed;

   typedef float _sideSpeed_type;
  _sideSpeed_type sideSpeed;

   typedef float _rotateSpeed_type;
  _rotateSpeed_type rotateSpeed;

   typedef float _bodyHeight_type;
  _bodyHeight_type bodyHeight;

   typedef float _footRaiseHeight_type;
  _footRaiseHeight_type footRaiseHeight;

   typedef float _yaw_type;
  _yaw_type yaw;

   typedef float _pitch_type;
  _pitch_type pitch;

   typedef float _roll_type;
  _roll_type roll;

   typedef boost::array< ::laikago_msgs::LED_<ContainerAllocator> , 4>  _led_type;
  _led_type led;

   typedef boost::array<uint8_t, 40>  _wirelessRemote_type;
  _wirelessRemote_type wirelessRemote;

   typedef int32_t _crc_type;
  _crc_type crc;





  typedef boost::shared_ptr< ::laikago_msgs::HighCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::laikago_msgs::HighCmd_<ContainerAllocator> const> ConstPtr;

}; // struct HighCmd_

typedef ::laikago_msgs::HighCmd_<std::allocator<void> > HighCmd;

typedef boost::shared_ptr< ::laikago_msgs::HighCmd > HighCmdPtr;
typedef boost::shared_ptr< ::laikago_msgs::HighCmd const> HighCmdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::laikago_msgs::HighCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::laikago_msgs::HighCmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::laikago_msgs::HighCmd_<ContainerAllocator1> & lhs, const ::laikago_msgs::HighCmd_<ContainerAllocator2> & rhs)
{
  return lhs.levelFlag == rhs.levelFlag &&
    lhs.mode == rhs.mode &&
    lhs.forwardSpeed == rhs.forwardSpeed &&
    lhs.sideSpeed == rhs.sideSpeed &&
    lhs.rotateSpeed == rhs.rotateSpeed &&
    lhs.bodyHeight == rhs.bodyHeight &&
    lhs.footRaiseHeight == rhs.footRaiseHeight &&
    lhs.yaw == rhs.yaw &&
    lhs.pitch == rhs.pitch &&
    lhs.roll == rhs.roll &&
    lhs.led == rhs.led &&
    lhs.wirelessRemote == rhs.wirelessRemote &&
    lhs.crc == rhs.crc;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::laikago_msgs::HighCmd_<ContainerAllocator1> & lhs, const ::laikago_msgs::HighCmd_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace laikago_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::laikago_msgs::HighCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::laikago_msgs::HighCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::laikago_msgs::HighCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::laikago_msgs::HighCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::laikago_msgs::HighCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::laikago_msgs::HighCmd_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::laikago_msgs::HighCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2dd27d670ca407541b0dd80079b1b2f6";
  }

  static const char* value(const ::laikago_msgs::HighCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2dd27d670ca40754ULL;
  static const uint64_t static_value2 = 0x1b0dd80079b1b2f6ULL;
};

template<class ContainerAllocator>
struct DataType< ::laikago_msgs::HighCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "laikago_msgs/HighCmd";
  }

  static const char* value(const ::laikago_msgs::HighCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::laikago_msgs::HighCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 levelFlag\n"
"uint8 mode\n"
"float32 forwardSpeed\n"
"float32 sideSpeed\n"
"float32 rotateSpeed	\n"
"float32 bodyHeight\n"
"float32 footRaiseHeight\n"
"float32 yaw\n"
"float32 pitch\n"
"float32 roll\n"
"LED[4] led\n"
"uint8[40] wirelessRemote\n"
"int32 crc\n"
"================================================================================\n"
"MSG: laikago_msgs/LED\n"
"uint8 r\n"
"uint8 g\n"
"uint8 b\n"
;
  }

  static const char* value(const ::laikago_msgs::HighCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::laikago_msgs::HighCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.levelFlag);
      stream.next(m.mode);
      stream.next(m.forwardSpeed);
      stream.next(m.sideSpeed);
      stream.next(m.rotateSpeed);
      stream.next(m.bodyHeight);
      stream.next(m.footRaiseHeight);
      stream.next(m.yaw);
      stream.next(m.pitch);
      stream.next(m.roll);
      stream.next(m.led);
      stream.next(m.wirelessRemote);
      stream.next(m.crc);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HighCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::laikago_msgs::HighCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::laikago_msgs::HighCmd_<ContainerAllocator>& v)
  {
    s << indent << "levelFlag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.levelFlag);
    s << indent << "mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mode);
    s << indent << "forwardSpeed: ";
    Printer<float>::stream(s, indent + "  ", v.forwardSpeed);
    s << indent << "sideSpeed: ";
    Printer<float>::stream(s, indent + "  ", v.sideSpeed);
    s << indent << "rotateSpeed: ";
    Printer<float>::stream(s, indent + "  ", v.rotateSpeed);
    s << indent << "bodyHeight: ";
    Printer<float>::stream(s, indent + "  ", v.bodyHeight);
    s << indent << "footRaiseHeight: ";
    Printer<float>::stream(s, indent + "  ", v.footRaiseHeight);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
    s << indent << "pitch: ";
    Printer<float>::stream(s, indent + "  ", v.pitch);
    s << indent << "roll: ";
    Printer<float>::stream(s, indent + "  ", v.roll);
    s << indent << "led[]" << std::endl;
    for (size_t i = 0; i < v.led.size(); ++i)
    {
      s << indent << "  led[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::laikago_msgs::LED_<ContainerAllocator> >::stream(s, indent + "    ", v.led[i]);
    }
    s << indent << "wirelessRemote[]" << std::endl;
    for (size_t i = 0; i < v.wirelessRemote.size(); ++i)
    {
      s << indent << "  wirelessRemote[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.wirelessRemote[i]);
    }
    s << indent << "crc: ";
    Printer<int32_t>::stream(s, indent + "  ", v.crc);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LAIKAGO_MSGS_MESSAGE_HIGHCMD_H