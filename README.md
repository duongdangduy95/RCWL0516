# Thử nghiệm phát hiện chuyển động với cảm biến RCWL-0516 và Arduino

Dự án này sử dụng cảm biến chuyển động **RCWL-0516** kết hợp với **Arduino** để phát hiện chuyển động trong phạm vi 5–7 mét. Khi có chuyển động, cảm biến sẽ xuất tín hiệu mức cao (HIGH) và ngược lại sẽ ở mức thấp (LOW).

---

## Giới thiệu thiết bị

### Arduino
ArduinoIDE là một nền tảng mã nguồn mở bao gồm phần cứng vi điều khiển và phần mềm lập trình đơn giản, thường được sử dụng trong các dự án điện tử và tự động hóa. Trong dự án này, Arduino đóng vai trò nhận tín hiệu từ cảm biến và xử lý thông tin.

### Cảm biến RCWL-0516
RCWL-0516 là cảm biến chuyển động sử dụng sóng vi ba (microwave radar) để phát hiện vật thể chuyển động. Ưu điểm của nó so với cảm biến hồng ngoại (PIR) là có thể phát hiện xuyên qua vật liệu mỏng như gỗ, nhựa mỏng, và không bị ảnh hưởng bởi nhiệt độ môi trường.

---

##  Sơ đồ kết nối phần cứng

| Chân RCWL-0516 | Chân Arduino |
|----------------|--------------|
| VIN            | 5V           |
| GND            | GND          |
| OUT            | D2           |

📌 **Lưu ý:** Cảm biến có thể phát hiện chuyển động xuyên qua vật mỏng như vách gỗ, nhựa mỏng,... và có độ nhạy cao trong bán kính 5–7 mét. Các bạn có thể thay chân D2 bằng 1 chân Digital khác

---

## 📹 Video demo

Xem video hướng dẫn tại YouTube:  
👉 [https://youtu.be/GAG5ZflNMXE](https://youtu.be/GAG5ZflNMXE)

---

## 📁 Thông tin thêm

Mã nguồn được lưu tại file `RCWL0516.ino` trong repo này.  
