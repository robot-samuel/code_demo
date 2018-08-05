; Auto-generated. Do not edit!


(cl:in-package dgvmsg-msg)


;//! \htmlinclude DriverVelocity.msg.html

(cl:defclass <DriverVelocity> (roslisp-msg-protocol:ros-message)
  ((driver
    :reader driver
    :initarg :driver
    :type (cl:vector dgvmsg-msg:DriverNode)
   :initform (cl:make-array 0 :element-type 'dgvmsg-msg:DriverNode :initial-element (cl:make-instance 'dgvmsg-msg:DriverNode))))
)

(cl:defclass DriverVelocity (<DriverVelocity>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DriverVelocity>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DriverVelocity)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dgvmsg-msg:<DriverVelocity> is deprecated: use dgvmsg-msg:DriverVelocity instead.")))

(cl:ensure-generic-function 'driver-val :lambda-list '(m))
(cl:defmethod driver-val ((m <DriverVelocity>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:driver-val is deprecated.  Use dgvmsg-msg:driver instead.")
  (driver m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DriverVelocity>) ostream)
  "Serializes a message object of type '<DriverVelocity>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'driver))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'driver))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DriverVelocity>) istream)
  "Deserializes a message object of type '<DriverVelocity>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'driver) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'driver)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'dgvmsg-msg:DriverNode))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DriverVelocity>)))
  "Returns string type for a message object of type '<DriverVelocity>"
  "dgvmsg/DriverVelocity")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DriverVelocity)))
  "Returns string type for a message object of type 'DriverVelocity"
  "dgvmsg/DriverVelocity")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DriverVelocity>)))
  "Returns md5sum for a message object of type '<DriverVelocity>"
  "97330beae4312907dc78de56d0603bd5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DriverVelocity)))
  "Returns md5sum for a message object of type 'DriverVelocity"
  "97330beae4312907dc78de56d0603bd5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DriverVelocity>)))
  "Returns full string definition for message of type '<DriverVelocity>"
  (cl:format cl:nil "# This expresses velocity in free space broken into its linear and angular parts.~%~%DriverNode[] driver~%================================================================================~%MSG: dgvmsg/DriverNode~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%~%string name~%int32 add~%int32 VRPM~%float64 Vspeed~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DriverVelocity)))
  "Returns full string definition for message of type 'DriverVelocity"
  (cl:format cl:nil "# This expresses velocity in free space broken into its linear and angular parts.~%~%DriverNode[] driver~%================================================================================~%MSG: dgvmsg/DriverNode~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%~%string name~%int32 add~%int32 VRPM~%float64 Vspeed~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DriverVelocity>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'driver) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DriverVelocity>))
  "Converts a ROS message object to a list"
  (cl:list 'DriverVelocity
    (cl:cons ':driver (driver msg))
))
