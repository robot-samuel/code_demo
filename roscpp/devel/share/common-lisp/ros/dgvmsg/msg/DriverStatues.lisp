; Auto-generated. Do not edit!


(cl:in-package dgvmsg-msg)


;//! \htmlinclude DriverStatues.msg.html

(cl:defclass <DriverStatues> (roslisp-msg-protocol:ros-message)
  ((device_status
    :reader device_status
    :initarg :device_status
    :type cl:integer
    :initform 0)
   (device_add
    :reader device_add
    :initarg :device_add
    :type cl:integer
    :initform 0)
   (actvelocityRPM
    :reader actvelocityRPM
    :initarg :actvelocityRPM
    :type cl:integer
    :initform 0)
   (setvelocityRPM
    :reader setvelocityRPM
    :initarg :setvelocityRPM
    :type cl:integer
    :initform 0)
   (dc_voltage
    :reader dc_voltage
    :initarg :dc_voltage
    :type cl:fixnum
    :initform 0)
   (ipm_temperature
    :reader ipm_temperature
    :initarg :ipm_temperature
    :type cl:fixnum
    :initform 0)
   (actcurrent
    :reader actcurrent
    :initarg :actcurrent
    :type cl:float
    :initform 0.0)
   (actualpos
    :reader actualpos
    :initarg :actualpos
    :type cl:integer
    :initform 0)
   (emergencyinputvalue
    :reader emergencyinputvalue
    :initarg :emergencyinputvalue
    :type cl:integer
    :initform 0)
   (errorcode
    :reader errorcode
    :initarg :errorcode
    :type cl:string
    :initform ""))
)

(cl:defclass DriverStatues (<DriverStatues>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DriverStatues>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DriverStatues)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dgvmsg-msg:<DriverStatues> is deprecated: use dgvmsg-msg:DriverStatues instead.")))

(cl:ensure-generic-function 'device_status-val :lambda-list '(m))
(cl:defmethod device_status-val ((m <DriverStatues>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:device_status-val is deprecated.  Use dgvmsg-msg:device_status instead.")
  (device_status m))

(cl:ensure-generic-function 'device_add-val :lambda-list '(m))
(cl:defmethod device_add-val ((m <DriverStatues>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:device_add-val is deprecated.  Use dgvmsg-msg:device_add instead.")
  (device_add m))

(cl:ensure-generic-function 'actvelocityRPM-val :lambda-list '(m))
(cl:defmethod actvelocityRPM-val ((m <DriverStatues>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:actvelocityRPM-val is deprecated.  Use dgvmsg-msg:actvelocityRPM instead.")
  (actvelocityRPM m))

(cl:ensure-generic-function 'setvelocityRPM-val :lambda-list '(m))
(cl:defmethod setvelocityRPM-val ((m <DriverStatues>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:setvelocityRPM-val is deprecated.  Use dgvmsg-msg:setvelocityRPM instead.")
  (setvelocityRPM m))

(cl:ensure-generic-function 'dc_voltage-val :lambda-list '(m))
(cl:defmethod dc_voltage-val ((m <DriverStatues>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:dc_voltage-val is deprecated.  Use dgvmsg-msg:dc_voltage instead.")
  (dc_voltage m))

(cl:ensure-generic-function 'ipm_temperature-val :lambda-list '(m))
(cl:defmethod ipm_temperature-val ((m <DriverStatues>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:ipm_temperature-val is deprecated.  Use dgvmsg-msg:ipm_temperature instead.")
  (ipm_temperature m))

(cl:ensure-generic-function 'actcurrent-val :lambda-list '(m))
(cl:defmethod actcurrent-val ((m <DriverStatues>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:actcurrent-val is deprecated.  Use dgvmsg-msg:actcurrent instead.")
  (actcurrent m))

(cl:ensure-generic-function 'actualpos-val :lambda-list '(m))
(cl:defmethod actualpos-val ((m <DriverStatues>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:actualpos-val is deprecated.  Use dgvmsg-msg:actualpos instead.")
  (actualpos m))

(cl:ensure-generic-function 'emergencyinputvalue-val :lambda-list '(m))
(cl:defmethod emergencyinputvalue-val ((m <DriverStatues>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:emergencyinputvalue-val is deprecated.  Use dgvmsg-msg:emergencyinputvalue instead.")
  (emergencyinputvalue m))

(cl:ensure-generic-function 'errorcode-val :lambda-list '(m))
(cl:defmethod errorcode-val ((m <DriverStatues>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:errorcode-val is deprecated.  Use dgvmsg-msg:errorcode instead.")
  (errorcode m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DriverStatues>) ostream)
  "Serializes a message object of type '<DriverStatues>"
  (cl:let* ((signed (cl:slot-value msg 'device_status)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'device_add)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'actvelocityRPM)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'setvelocityRPM)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'dc_voltage)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'dc_voltage)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ipm_temperature)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'ipm_temperature)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'actcurrent))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'actualpos)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'emergencyinputvalue)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'errorcode))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'errorcode))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DriverStatues>) istream)
  "Deserializes a message object of type '<DriverStatues>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'device_status) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'device_add) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'actvelocityRPM) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'setvelocityRPM) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'dc_voltage)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'dc_voltage)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ipm_temperature)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'ipm_temperature)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'actcurrent) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'actualpos) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'emergencyinputvalue) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'errorcode) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'errorcode) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DriverStatues>)))
  "Returns string type for a message object of type '<DriverStatues>"
  "dgvmsg/DriverStatues")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DriverStatues)))
  "Returns string type for a message object of type 'DriverStatues"
  "dgvmsg/DriverStatues")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DriverStatues>)))
  "Returns md5sum for a message object of type '<DriverStatues>"
  "c62c2a7291954cadc3c1037b1a2821b0")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DriverStatues)))
  "Returns md5sum for a message object of type 'DriverStatues"
  "c62c2a7291954cadc3c1037b1a2821b0")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DriverStatues>)))
  "Returns full string definition for message of type '<DriverStatues>"
  (cl:format cl:nil "# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%~%int32 device_status~%int32 device_add~%int32 actvelocityRPM~%int32 setvelocityRPM~%uint16 dc_voltage~%uint16 ipm_temperature~%float32 actcurrent~%int32 actualpos~%int32 emergencyinputvalue~%string errorcode~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DriverStatues)))
  "Returns full string definition for message of type 'DriverStatues"
  (cl:format cl:nil "# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%~%int32 device_status~%int32 device_add~%int32 actvelocityRPM~%int32 setvelocityRPM~%uint16 dc_voltage~%uint16 ipm_temperature~%float32 actcurrent~%int32 actualpos~%int32 emergencyinputvalue~%string errorcode~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DriverStatues>))
  (cl:+ 0
     4
     4
     4
     4
     2
     2
     4
     4
     4
     4 (cl:length (cl:slot-value msg 'errorcode))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DriverStatues>))
  "Converts a ROS message object to a list"
  (cl:list 'DriverStatues
    (cl:cons ':device_status (device_status msg))
    (cl:cons ':device_add (device_add msg))
    (cl:cons ':actvelocityRPM (actvelocityRPM msg))
    (cl:cons ':setvelocityRPM (setvelocityRPM msg))
    (cl:cons ':dc_voltage (dc_voltage msg))
    (cl:cons ':ipm_temperature (ipm_temperature msg))
    (cl:cons ':actcurrent (actcurrent msg))
    (cl:cons ':actualpos (actualpos msg))
    (cl:cons ':emergencyinputvalue (emergencyinputvalue msg))
    (cl:cons ':errorcode (errorcode msg))
))
