; Auto-generated. Do not edit!


(cl:in-package dgvmsg-msg)


;//! \htmlinclude Encounter.msg.html

(cl:defclass <Encounter> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (devadd
    :reader devadd
    :initarg :devadd
    :type cl:integer
    :initform 0)
   (now
    :reader now
    :initarg :now
    :type cl:real
    :initform 0)
   (encounter
    :reader encounter
    :initarg :encounter
    :type cl:integer
    :initform 0)
   (DrivStatus
    :reader DrivStatus
    :initarg :DrivStatus
    :type cl:fixnum
    :initform 0))
)

(cl:defclass Encounter (<Encounter>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Encounter>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Encounter)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dgvmsg-msg:<Encounter> is deprecated: use dgvmsg-msg:Encounter instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <Encounter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:header-val is deprecated.  Use dgvmsg-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'devadd-val :lambda-list '(m))
(cl:defmethod devadd-val ((m <Encounter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:devadd-val is deprecated.  Use dgvmsg-msg:devadd instead.")
  (devadd m))

(cl:ensure-generic-function 'now-val :lambda-list '(m))
(cl:defmethod now-val ((m <Encounter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:now-val is deprecated.  Use dgvmsg-msg:now instead.")
  (now m))

(cl:ensure-generic-function 'encounter-val :lambda-list '(m))
(cl:defmethod encounter-val ((m <Encounter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:encounter-val is deprecated.  Use dgvmsg-msg:encounter instead.")
  (encounter m))

(cl:ensure-generic-function 'DrivStatus-val :lambda-list '(m))
(cl:defmethod DrivStatus-val ((m <Encounter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:DrivStatus-val is deprecated.  Use dgvmsg-msg:DrivStatus instead.")
  (DrivStatus m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Encounter>) ostream)
  "Serializes a message object of type '<Encounter>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let* ((signed (cl:slot-value msg 'devadd)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((__sec (cl:floor (cl:slot-value msg 'now)))
        (__nsec (cl:round (cl:* 1e9 (cl:- (cl:slot-value msg 'now) (cl:floor (cl:slot-value msg 'now)))))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 0) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __nsec) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'encounter)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'encounter)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'encounter)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'encounter)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'DrivStatus)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'DrivStatus)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Encounter>) istream)
  "Deserializes a message object of type '<Encounter>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'devadd) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((__sec 0) (__nsec 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 0) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __nsec) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'now) (cl:+ (cl:coerce __sec 'cl:double-float) (cl:/ __nsec 1e9))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'encounter)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'encounter)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'encounter)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'encounter)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'DrivStatus)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'DrivStatus)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Encounter>)))
  "Returns string type for a message object of type '<Encounter>"
  "dgvmsg/Encounter")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Encounter)))
  "Returns string type for a message object of type 'Encounter"
  "dgvmsg/Encounter")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Encounter>)))
  "Returns md5sum for a message object of type '<Encounter>"
  "94b3d8c09c6f2b83bd665d3baaad2667")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Encounter)))
  "Returns md5sum for a message object of type 'Encounter"
  "94b3d8c09c6f2b83bd665d3baaad2667")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Encounter>)))
  "Returns full string definition for message of type '<Encounter>"
  (cl:format cl:nil "# This is a message to hold data from an IMU (Inertial Measurement Unit)~%#~%# Accelerations should be in m/s^2 (not in g's), and rotational velocity should be in rad/sec~%#~%# If the covariance of the measurement is known, it should be filled in (if all you know is the ~%# variance of each measurement, e.g. from the datasheet, just put those along the diagonal)~%# A covariance matrix of all zeros will be interpreted as \"covariance unknown\", and to use the~%# data a covariance will have to be assumed or gotten from some other source~%#~%# If you have no estimate for one of the data elements (e.g. your IMU doesn't produce an orientation ~%# estimate), please set element 0 of the associated covariance matrix to -1~%# If you are interpreting this message, please check for a value of -1 in the first element of each ~%# covariance matrix, and disregard the associated estimate.~%~%Header header~%~%int32 devadd~%time now~%uint32 encounter~%uint16 DrivStatus~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Encounter)))
  "Returns full string definition for message of type 'Encounter"
  (cl:format cl:nil "# This is a message to hold data from an IMU (Inertial Measurement Unit)~%#~%# Accelerations should be in m/s^2 (not in g's), and rotational velocity should be in rad/sec~%#~%# If the covariance of the measurement is known, it should be filled in (if all you know is the ~%# variance of each measurement, e.g. from the datasheet, just put those along the diagonal)~%# A covariance matrix of all zeros will be interpreted as \"covariance unknown\", and to use the~%# data a covariance will have to be assumed or gotten from some other source~%#~%# If you have no estimate for one of the data elements (e.g. your IMU doesn't produce an orientation ~%# estimate), please set element 0 of the associated covariance matrix to -1~%# If you are interpreting this message, please check for a value of -1 in the first element of each ~%# covariance matrix, and disregard the associated estimate.~%~%Header header~%~%int32 devadd~%time now~%uint32 encounter~%uint16 DrivStatus~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Encounter>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4
     8
     4
     2
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Encounter>))
  "Converts a ROS message object to a list"
  (cl:list 'Encounter
    (cl:cons ':header (header msg))
    (cl:cons ':devadd (devadd msg))
    (cl:cons ':now (now msg))
    (cl:cons ':encounter (encounter msg))
    (cl:cons ':DrivStatus (DrivStatus msg))
))
