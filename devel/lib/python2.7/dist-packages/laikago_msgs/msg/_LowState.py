# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from laikago_msgs/LowState.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import laikago_msgs.msg

class LowState(genpy.Message):
  _md5sum = "ff497aa2c0f42e68227aaf7b1f8c13c1"
  _type = "laikago_msgs/LowState"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """uint8 levelFlag
IMU imu
MotorState[20] motorState
float32[4] footForce
uint32 tick                   # time reference
uint8[40] wirelessRemote      # wireless command
uint32 crc                    # check bit
Cartesian[4] eeForce          #it's a 1-DOF force infact, but we use 3-DOF here just for visualization 
================================================================================
MSG: laikago_msgs/IMU
float32[4] quaternion
float32[3] gyroscope
float32[3] acceleration
float32[3] rpy
float32 temp
================================================================================
MSG: laikago_msgs/MotorState
uint8 mode            # motor current mode 
float32 position     # motor current position（rad）
float32 velocity     # motor current speed（rad/s）
float32 torque       # current estimated output torque（N*m）
float32 temperature  # motor temperature（slow conduction of temperature leads to lag）
int32 iReserve
float32 fReserve
================================================================================
MSG: laikago_msgs/Cartesian
float32 x
float32 y
float32 z"""
  __slots__ = ['levelFlag','imu','motorState','footForce','tick','wirelessRemote','crc','eeForce']
  _slot_types = ['uint8','laikago_msgs/IMU','laikago_msgs/MotorState[20]','float32[4]','uint32','uint8[40]','uint32','laikago_msgs/Cartesian[4]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       levelFlag,imu,motorState,footForce,tick,wirelessRemote,crc,eeForce

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(LowState, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.levelFlag is None:
        self.levelFlag = 0
      if self.imu is None:
        self.imu = laikago_msgs.msg.IMU()
      if self.motorState is None:
        self.motorState = [laikago_msgs.msg.MotorState() for _ in range(20)]
      if self.footForce is None:
        self.footForce = [0.] * 4
      if self.tick is None:
        self.tick = 0
      if self.wirelessRemote is None:
        self.wirelessRemote = b'\0'*40
      if self.crc is None:
        self.crc = 0
      if self.eeForce is None:
        self.eeForce = [laikago_msgs.msg.Cartesian() for _ in range(4)]
    else:
      self.levelFlag = 0
      self.imu = laikago_msgs.msg.IMU()
      self.motorState = [laikago_msgs.msg.MotorState() for _ in range(20)]
      self.footForce = [0.] * 4
      self.tick = 0
      self.wirelessRemote = b'\0'*40
      self.crc = 0
      self.eeForce = [laikago_msgs.msg.Cartesian() for _ in range(4)]

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.levelFlag
      buff.write(_get_struct_B().pack(_x))
      buff.write(_get_struct_4f().pack(*self.imu.quaternion))
      buff.write(_get_struct_3f().pack(*self.imu.gyroscope))
      buff.write(_get_struct_3f().pack(*self.imu.acceleration))
      buff.write(_get_struct_3f().pack(*self.imu.rpy))
      _x = self.imu.temp
      buff.write(_get_struct_f().pack(_x))
      if len(self.motorState) != 20:
        self._check_types(ValueError("Expecting %s items but found %s when writing '%s'" % (20, len(self.motorState), 'self.motorState')))
      for val1 in self.motorState:
        _x = val1
        buff.write(_get_struct_B4fif().pack(_x.mode, _x.position, _x.velocity, _x.torque, _x.temperature, _x.iReserve, _x.fReserve))
      buff.write(_get_struct_4f().pack(*self.footForce))
      _x = self.tick
      buff.write(_get_struct_I().pack(_x))
      _x = self.wirelessRemote
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_get_struct_40B().pack(*_x))
      else:
        buff.write(_get_struct_40s().pack(_x))
      _x = self.crc
      buff.write(_get_struct_I().pack(_x))
      if len(self.eeForce) != 4:
        self._check_types(ValueError("Expecting %s items but found %s when writing '%s'" % (4, len(self.eeForce), 'self.eeForce')))
      for val1 in self.eeForce:
        _x = val1
        buff.write(_get_struct_3f().pack(_x.x, _x.y, _x.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.imu is None:
        self.imu = laikago_msgs.msg.IMU()
      if self.motorState is None:
        self.motorState = None
      if self.eeForce is None:
        self.eeForce = None
      end = 0
      start = end
      end += 1
      (self.levelFlag,) = _get_struct_B().unpack(str[start:end])
      start = end
      end += 16
      self.imu.quaternion = _get_struct_4f().unpack(str[start:end])
      start = end
      end += 12
      self.imu.gyroscope = _get_struct_3f().unpack(str[start:end])
      start = end
      end += 12
      self.imu.acceleration = _get_struct_3f().unpack(str[start:end])
      start = end
      end += 12
      self.imu.rpy = _get_struct_3f().unpack(str[start:end])
      start = end
      end += 4
      (self.imu.temp,) = _get_struct_f().unpack(str[start:end])
      self.motorState = []
      for i in range(0, 20):
        val1 = laikago_msgs.msg.MotorState()
        _x = val1
        start = end
        end += 25
        (_x.mode, _x.position, _x.velocity, _x.torque, _x.temperature, _x.iReserve, _x.fReserve,) = _get_struct_B4fif().unpack(str[start:end])
        self.motorState.append(val1)
      start = end
      end += 16
      self.footForce = _get_struct_4f().unpack(str[start:end])
      start = end
      end += 4
      (self.tick,) = _get_struct_I().unpack(str[start:end])
      start = end
      end += 40
      self.wirelessRemote = str[start:end]
      start = end
      end += 4
      (self.crc,) = _get_struct_I().unpack(str[start:end])
      self.eeForce = []
      for i in range(0, 4):
        val1 = laikago_msgs.msg.Cartesian()
        _x = val1
        start = end
        end += 12
        (_x.x, _x.y, _x.z,) = _get_struct_3f().unpack(str[start:end])
        self.eeForce.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.levelFlag
      buff.write(_get_struct_B().pack(_x))
      buff.write(self.imu.quaternion.tostring())
      buff.write(self.imu.gyroscope.tostring())
      buff.write(self.imu.acceleration.tostring())
      buff.write(self.imu.rpy.tostring())
      _x = self.imu.temp
      buff.write(_get_struct_f().pack(_x))
      if len(self.motorState) != 20:
        self._check_types(ValueError("Expecting %s items but found %s when writing '%s'" % (20, len(self.motorState), 'self.motorState')))
      for val1 in self.motorState:
        _x = val1
        buff.write(_get_struct_B4fif().pack(_x.mode, _x.position, _x.velocity, _x.torque, _x.temperature, _x.iReserve, _x.fReserve))
      buff.write(self.footForce.tostring())
      _x = self.tick
      buff.write(_get_struct_I().pack(_x))
      _x = self.wirelessRemote
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_get_struct_40B().pack(*_x))
      else:
        buff.write(_get_struct_40s().pack(_x))
      _x = self.crc
      buff.write(_get_struct_I().pack(_x))
      if len(self.eeForce) != 4:
        self._check_types(ValueError("Expecting %s items but found %s when writing '%s'" % (4, len(self.eeForce), 'self.eeForce')))
      for val1 in self.eeForce:
        _x = val1
        buff.write(_get_struct_3f().pack(_x.x, _x.y, _x.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.imu is None:
        self.imu = laikago_msgs.msg.IMU()
      if self.motorState is None:
        self.motorState = None
      if self.eeForce is None:
        self.eeForce = None
      end = 0
      start = end
      end += 1
      (self.levelFlag,) = _get_struct_B().unpack(str[start:end])
      start = end
      end += 16
      self.imu.quaternion = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=4)
      start = end
      end += 12
      self.imu.gyroscope = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=3)
      start = end
      end += 12
      self.imu.acceleration = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=3)
      start = end
      end += 12
      self.imu.rpy = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=3)
      start = end
      end += 4
      (self.imu.temp,) = _get_struct_f().unpack(str[start:end])
      self.motorState = []
      for i in range(0, 20):
        val1 = laikago_msgs.msg.MotorState()
        _x = val1
        start = end
        end += 25
        (_x.mode, _x.position, _x.velocity, _x.torque, _x.temperature, _x.iReserve, _x.fReserve,) = _get_struct_B4fif().unpack(str[start:end])
        self.motorState.append(val1)
      start = end
      end += 16
      self.footForce = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=4)
      start = end
      end += 4
      (self.tick,) = _get_struct_I().unpack(str[start:end])
      start = end
      end += 40
      self.wirelessRemote = str[start:end]
      start = end
      end += 4
      (self.crc,) = _get_struct_I().unpack(str[start:end])
      self.eeForce = []
      for i in range(0, 4):
        val1 = laikago_msgs.msg.Cartesian()
        _x = val1
        start = end
        end += 12
        (_x.x, _x.y, _x.z,) = _get_struct_3f().unpack(str[start:end])
        self.eeForce.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3f = None
def _get_struct_3f():
    global _struct_3f
    if _struct_3f is None:
        _struct_3f = struct.Struct("<3f")
    return _struct_3f
_struct_40B = None
def _get_struct_40B():
    global _struct_40B
    if _struct_40B is None:
        _struct_40B = struct.Struct("<40B")
    return _struct_40B
_struct_40s = None
def _get_struct_40s():
    global _struct_40s
    if _struct_40s is None:
        _struct_40s = struct.Struct("<40s")
    return _struct_40s
_struct_4f = None
def _get_struct_4f():
    global _struct_4f
    if _struct_4f is None:
        _struct_4f = struct.Struct("<4f")
    return _struct_4f
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
_struct_B4fif = None
def _get_struct_B4fif():
    global _struct_B4fif
    if _struct_B4fif is None:
        _struct_B4fif = struct.Struct("<B4fif")
    return _struct_B4fif
_struct_f = None
def _get_struct_f():
    global _struct_f
    if _struct_f is None:
        _struct_f = struct.Struct("<f")
    return _struct_f
