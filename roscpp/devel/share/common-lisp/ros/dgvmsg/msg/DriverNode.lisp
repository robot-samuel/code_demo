; Auto-generated. Do not edit!


(cl:in-package dgvmsg-msg)


;//! \htmlinclude DriverNode.msg.html

(cl:defclass <DriverNode> (roslisp-msg-protocol:ros-message)
  ((name
    :reader name
    :initarg :name
    :type cl:string
    :initform "")
   (add
    :reader add
    :initarg :add
    :type cl:integer
    :initform 0)
   (VRPM
    :reader VRPM
    :initarg :VRPM
    :type cl:integer
    :initform 0)
   (Vspeed
    :reader Vspeed
    :initarg :Vspeed
    :type cl:float
    :initform 0.0))
)

(cl:defclass DriverNode (<DriverNode>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DriverNode>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DriverNode)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dgvmsg-msg:<DriverNode> is deprecated: use dgvmsg-msg:DriverNode instead.")))

(cl:ensure-generic-function 'name-val :lambda-list '(m))
(cl:defmethod name-val ((m <DriverNode>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:name-val is deprecated.  Use dgvmsg-msg:name instead.")
  (name m))

(cl:ensure-generic-function 'add-val :lambda-list '(m))
(cl:defmethod add-val ((m <DriverNode>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:add-val is deprecated.  Use dgvmsg-msg:add instead.")
  (add m))

(cl:ensure-generic-function 'VRPM-val :lambda-list '(m))
(cl:defmethod VRPM-val ((m <DriverNode>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:VRPM-val is deprecated.  Use dgvmsg-msg:VRPM instead.")
  (VRPM m))

(cl:ensure-generic-function 'Vspeed-val :lambda-list '(m))
(cl:defmethod Vspeed-val ((m <DriverNode>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dgvmsg-msg:Vspeed-val is deprecated.  Use dgvmsg-msg:Vspeed instead.")
  (Vspeed m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DriverNode>) ostream)
  "Serializes a message object of type '<DriverNode>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'name))
  (cl:let* ((signed (cl:slot-value msg 'add)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'VRPM)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'Vspeed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DriverNode>) istream)
  "Deserializes a message object of type '<DriverNode>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'name) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'name) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'add) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'VRPM) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'Vspeed) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DriverNode>)))
  "Returns string type for a message object of type '<DriverNode>"
  "dgvmsg/DriverNode")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DriverNode)))
  "Returns string type for a message object of type 'DriverNode"
  "dgvmsg/DriverNode")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DriverNode>)))
  "Returns md5sum for a message object of type '<DriverNode>"
  "97dea7a29a79ed3e3ede5691994f3c14")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DriverNode)))
  "Returns md5sum for a message object of type 'DriverNode"
  "97dea7a29a79ed3e3ede5691994f3c14")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DriverNode>)))
  "Returns full string definition for message of type '<DriverNode>"
  (cl:format cl:nil "# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%~%string name~%int32 add~%int32 VRPM~%float64 Vspeed~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DriverNode)))
  "Returns full string definition for message of type 'DriverNode"
  (cl:format cl:nil "# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%~%string name~%int32 add~%int32 VRPM~%float64 Vspeed~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DriverNode>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'name))
     4
     4
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DriverNode>))
  "Converts a ROS message object to a list"
  (cl:list 'DriverNode
    (cl:cons ':name (name msg))
    (cl:cons ':add (add msg))
    (cl:cons ':VRPM (VRPM msg))
    (cl:cons ':Vspeed (Vspeed msg))
))
