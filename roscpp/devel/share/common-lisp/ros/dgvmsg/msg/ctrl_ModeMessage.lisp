; Auto-generated. Do not edit!


(cl:in-package dgvmsg-msg)


;//! \htmlinclude ctrl_ModeMessage.msg.html

(cl:defclass <ctrl_ModeMessage> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (online
    :reader online
    :initarg :online
    :type cl:fixnum
    :initform 0)
   (strcmd
    :reader strcmd
    :initarg :strcmd
    :type cl:string
    :initform "")
   (twist
    :reader twist
    :initarg :twist
    :type dgvmsg-msg:Twist
    :initform (cl:make-instance 'dgvmsg-msg:Twist)))
)

(cl:defclass ctrl_ModeMessage (<ctrl_ModeMessage>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ctrl_ModeMessage>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ctrl_ModeMessage)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dgvmsg-msg:<ctrl_ModeMessage> is deprecated: use dgvmsg-msg:ctrl_ModeMessage instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <ctrl_ModeMessage>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:header-val is deprecated.  Use dgvmsg-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'online-val :lambda-list '(m))
(cl:defmethod online-val ((m <ctrl_ModeMessage>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:online-val is deprecated.  Use dgvmsg-msg:online instead.")
  (online m))

(cl:ensure-generic-function 'strcmd-val :lambda-list '(m))
(cl:defmethod strcmd-val ((m <ctrl_ModeMessage>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:strcmd-val is deprecated.  Use dgvmsg-msg:strcmd instead.")
  (strcmd m))

(cl:ensure-generic-function 'twist-val :lambda-list '(m))
(cl:defmethod twist-val ((m <ctrl_ModeMessage>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:twist-val is deprecated.  Use dgvmsg-msg:twist instead.")
  (twist m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ctrl_ModeMessage>) ostream)
  "Serializes a message object of type '<ctrl_ModeMessage>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let* ((signed (cl:slot-value msg 'online)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'strcmd))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'strcmd))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'twist) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ctrl_ModeMessage>) istream)
  "Deserializes a message object of type '<ctrl_ModeMessage>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'online) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'strcmd) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'strcmd) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'twist) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ctrl_ModeMessage>)))
  "Returns string type for a message object of type '<ctrl_ModeMessage>"
  "dgvmsg/ctrl_ModeMessage")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ctrl_ModeMessage)))
  "Returns string type for a message object of type 'ctrl_ModeMessage"
  "dgvmsg/ctrl_ModeMessage")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ctrl_ModeMessage>)))
  "Returns md5sum for a message object of type '<ctrl_ModeMessage>"
  "08e7a508ef56ae0b7efc413d569a0ccc")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ctrl_ModeMessage)))
  "Returns md5sum for a message object of type 'ctrl_ModeMessage"
  "08e7a508ef56ae0b7efc413d569a0ccc")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ctrl_ModeMessage>)))
  "Returns full string definition for message of type '<ctrl_ModeMessage>"
  (cl:format cl:nil "# This expresses velocity in free space with uncertainty.~%# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)~%~%Header header~%int16 online~%string strcmd~%Twist twist~%~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: dgvmsg/Twist~%# This expresses velocity in free space broken into its linear and angular parts.~%Vector3  linear~%Vector3  angular~%~%================================================================================~%MSG: dgvmsg/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ctrl_ModeMessage)))
  "Returns full string definition for message of type 'ctrl_ModeMessage"
  (cl:format cl:nil "# This expresses velocity in free space with uncertainty.~%# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)~%~%Header header~%int16 online~%string strcmd~%Twist twist~%~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: dgvmsg/Twist~%# This expresses velocity in free space broken into its linear and angular parts.~%Vector3  linear~%Vector3  angular~%~%================================================================================~%MSG: dgvmsg/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ctrl_ModeMessage>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     2
     4 (cl:length (cl:slot-value msg 'strcmd))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'twist))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ctrl_ModeMessage>))
  "Converts a ROS message object to a list"
  (cl:list 'ctrl_ModeMessage
    (cl:cons ':header (header msg))
    (cl:cons ':online (online msg))
    (cl:cons ':strcmd (strcmd msg))
    (cl:cons ':twist (twist msg))
))
