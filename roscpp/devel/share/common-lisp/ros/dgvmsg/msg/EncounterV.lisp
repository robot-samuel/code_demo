; Auto-generated. Do not edit!


(cl:in-package dgvmsg-msg)


;//! \htmlinclude EncounterV.msg.html

(cl:defclass <EncounterV> (roslisp-msg-protocol:ros-message)
  ((cnt
    :reader cnt
    :initarg :cnt
    :type (cl:vector dgvmsg-msg:Encounter)
   :initform (cl:make-array 0 :element-type 'dgvmsg-msg:Encounter :initial-element (cl:make-instance 'dgvmsg-msg:Encounter))))
)

(cl:defclass EncounterV (<EncounterV>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <EncounterV>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'EncounterV)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dgvmsg-msg:<EncounterV> is deprecated: use dgvmsg-msg:EncounterV instead.")))

(cl:ensure-generic-function 'cnt-val :lambda-list '(m))
(cl:defmethod cnt-val ((m <EncounterV>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:cnt-val is deprecated.  Use dgvmsg-msg:cnt instead.")
  (cnt m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <EncounterV>) ostream)
  "Serializes a message object of type '<EncounterV>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'cnt))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'cnt))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <EncounterV>) istream)
  "Deserializes a message object of type '<EncounterV>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'cnt) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'cnt)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'dgvmsg-msg:Encounter))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<EncounterV>)))
  "Returns string type for a message object of type '<EncounterV>"
  "dgvmsg/EncounterV")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'EncounterV)))
  "Returns string type for a message object of type 'EncounterV"
  "dgvmsg/EncounterV")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<EncounterV>)))
  "Returns md5sum for a message object of type '<EncounterV>"
  "2da812357f3c8c503991e46840b0a125")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'EncounterV)))
  "Returns md5sum for a message object of type 'EncounterV"
  "2da812357f3c8c503991e46840b0a125")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<EncounterV>)))
  "Returns full string definition for message of type '<EncounterV>"
  (cl:format cl:nil "Encounter[] cnt~%================================================================================~%MSG: dgvmsg/Encounter~%# This is a message to hold data from an IMU (Inertial Measurement Unit)
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'EncounterV)))
  "Returns full string definition for message of type 'EncounterV"
  (cl:format cl:nil "Encounter[] cnt~%================================================================================~%MSG: dgvmsg/Encounter~%# This is a message to hold data from an IMU (Inertial Measurement Unit)
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <EncounterV>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'cnt) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <EncounterV>))
  "Converts a ROS message object to a list"
  (cl:list 'EncounterV
    (cl:cons ':cnt (cnt msg))
))