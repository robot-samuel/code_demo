; Auto-generated. Do not edit!


(cl:in-package dgvmsg-msg)


;//! \htmlinclude remoter.msg.html

(cl:defclass <remoter> (roslisp-msg-protocol:ros-message)
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
   (linear
    :reader linear
    :initarg :linear
    :type dgvmsg-msg:Vector3
    :initform (cl:make-instance 'dgvmsg-msg:Vector3))
   (angular
    :reader angular
    :initarg :angular
    :type dgvmsg-msg:Vector3
    :initform (cl:make-instance 'dgvmsg-msg:Vector3))
   (IOSTATUES1
    :reader IOSTATUES1
    :initarg :IOSTATUES1
    :type (cl:vector cl:fixnum)
   :initform (cl:make-array 0 :element-type 'cl:fixnum :initial-element 0))
   (IOSTATUES2
    :reader IOSTATUES2
    :initarg :IOSTATUES2
    :type (cl:vector cl:fixnum)
   :initform (cl:make-array 0 :element-type 'cl:fixnum :initial-element 0))
   (buttons
    :reader buttons
    :initarg :buttons
    :type (cl:vector cl:fixnum)
   :initform (cl:make-array 0 :element-type 'cl:fixnum :initial-element 0)))
)

(cl:defclass remoter (<remoter>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <remoter>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'remoter)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dgvmsg-msg:<remoter> is deprecated: use dgvmsg-msg:remoter instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <remoter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:header-val is deprecated.  Use dgvmsg-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'online-val :lambda-list '(m))
(cl:defmethod online-val ((m <remoter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:online-val is deprecated.  Use dgvmsg-msg:online instead.")
  (online m))

(cl:ensure-generic-function 'linear-val :lambda-list '(m))
(cl:defmethod linear-val ((m <remoter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:linear-val is deprecated.  Use dgvmsg-msg:linear instead.")
  (linear m))

(cl:ensure-generic-function 'angular-val :lambda-list '(m))
(cl:defmethod angular-val ((m <remoter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:angular-val is deprecated.  Use dgvmsg-msg:angular instead.")
  (angular m))

(cl:ensure-generic-function 'IOSTATUES1-val :lambda-list '(m))
(cl:defmethod IOSTATUES1-val ((m <remoter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:IOSTATUES1-val is deprecated.  Use dgvmsg-msg:IOSTATUES1 instead.")
  (IOSTATUES1 m))

(cl:ensure-generic-function 'IOSTATUES2-val :lambda-list '(m))
(cl:defmethod IOSTATUES2-val ((m <remoter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:IOSTATUES2-val is deprecated.  Use dgvmsg-msg:IOSTATUES2 instead.")
  (IOSTATUES2 m))

(cl:ensure-generic-function 'buttons-val :lambda-list '(m))
(cl:defmethod buttons-val ((m <remoter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:buttons-val is deprecated.  Use dgvmsg-msg:buttons instead.")
  (buttons m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <remoter>) ostream)
  "Serializes a message object of type '<remoter>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let* ((signed (cl:slot-value msg 'online)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'linear) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'angular) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'IOSTATUES1))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) ele) ostream))
   (cl:slot-value msg 'IOSTATUES1))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'IOSTATUES2))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) ele) ostream))
   (cl:slot-value msg 'IOSTATUES2))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'buttons))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) ele) ostream))
   (cl:slot-value msg 'buttons))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <remoter>) istream)
  "Deserializes a message object of type '<remoter>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'online) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'linear) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'angular) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'IOSTATUES1) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'IOSTATUES1)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:aref vals i)) (cl:read-byte istream)))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'IOSTATUES2) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'IOSTATUES2)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:aref vals i)) (cl:read-byte istream)))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'buttons) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'buttons)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:aref vals i)) (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<remoter>)))
  "Returns string type for a message object of type '<remoter>"
  "dgvmsg/remoter")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'remoter)))
  "Returns string type for a message object of type 'remoter"
  "dgvmsg/remoter")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<remoter>)))
  "Returns md5sum for a message object of type '<remoter>"
  "eb64999f0a6539f1e1247da4c560559b")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'remoter)))
  "Returns md5sum for a message object of type 'remoter"
  "eb64999f0a6539f1e1247da4c560559b")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<remoter>)))
  "Returns full string definition for message of type '<remoter>"
  (cl:format cl:nil "Header header~%int16 online~%Vector3  linear~%Vector3  angular~%uint8[] IOSTATUES1~%uint8[] IOSTATUES2~%uint8[] buttons~%~%~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: dgvmsg/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'remoter)))
  "Returns full string definition for message of type 'remoter"
  (cl:format cl:nil "Header header~%int16 online~%Vector3  linear~%Vector3  angular~%uint8[] IOSTATUES1~%uint8[] IOSTATUES2~%uint8[] buttons~%~%~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: dgvmsg/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <remoter>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     2
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'linear))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'angular))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'IOSTATUES1) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'IOSTATUES2) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'buttons) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <remoter>))
  "Converts a ROS message object to a list"
  (cl:list 'remoter
    (cl:cons ':header (header msg))
    (cl:cons ':online (online msg))
    (cl:cons ':linear (linear msg))
    (cl:cons ':angular (angular msg))
    (cl:cons ':IOSTATUES1 (IOSTATUES1 msg))
    (cl:cons ':IOSTATUES2 (IOSTATUES2 msg))
    (cl:cons ':buttons (buttons msg))
))
