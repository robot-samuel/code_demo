; Auto-generated. Do not edit!


(cl:in-package dgvmsg-msg)


;//! \htmlinclude remoterctrl.msg.html

(cl:defclass <remoterctrl> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (ctrl_autodoor
    :reader ctrl_autodoor
    :initarg :ctrl_autodoor
    :type cl:fixnum
    :initform 0))
)

(cl:defclass remoterctrl (<remoterctrl>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <remoterctrl>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'remoterctrl)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dgvmsg-msg:<remoterctrl> is deprecated: use dgvmsg-msg:remoterctrl instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <remoterctrl>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:header-val is deprecated.  Use dgvmsg-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'ctrl_autodoor-val :lambda-list '(m))
(cl:defmethod ctrl_autodoor-val ((m <remoterctrl>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:ctrl_autodoor-val is deprecated.  Use dgvmsg-msg:ctrl_autodoor instead.")
  (ctrl_autodoor m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <remoterctrl>) ostream)
  "Serializes a message object of type '<remoterctrl>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let* ((signed (cl:slot-value msg 'ctrl_autodoor)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <remoterctrl>) istream)
  "Deserializes a message object of type '<remoterctrl>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'ctrl_autodoor) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<remoterctrl>)))
  "Returns string type for a message object of type '<remoterctrl>"
  "dgvmsg/remoterctrl")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'remoterctrl)))
  "Returns string type for a message object of type 'remoterctrl"
  "dgvmsg/remoterctrl")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<remoterctrl>)))
  "Returns md5sum for a message object of type '<remoterctrl>"
  "c6a1b8e6b5fe4720ee6fb42f38d46646")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'remoterctrl)))
  "Returns md5sum for a message object of type 'remoterctrl"
  "c6a1b8e6b5fe4720ee6fb42f38d46646")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<remoterctrl>)))
  "Returns full string definition for message of type '<remoterctrl>"
  (cl:format cl:nil "Header header~%int16 ctrl_autodoor~%~%~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'remoterctrl)))
  "Returns full string definition for message of type 'remoterctrl"
  (cl:format cl:nil "Header header~%int16 ctrl_autodoor~%~%~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <remoterctrl>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     2
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <remoterctrl>))
  "Converts a ROS message object to a list"
  (cl:list 'remoterctrl
    (cl:cons ':header (header msg))
    (cl:cons ':ctrl_autodoor (ctrl_autodoor msg))
))
