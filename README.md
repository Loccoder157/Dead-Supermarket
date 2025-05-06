# 🛒 DEAD SUPERMARKET

**Dead Supermarket** là một game sinh tồn 2D sử dụng C++ và thư viện Raylib.  
Người chơi bị kẹt trong một siêu thị sau tận thế, nơi những sinh vật kỳ dị chỉ di chuyển vào ban đêm...

---

## 🧠 Ý tưởng chính

- **Bối cảnh**: Siêu thị bỏ hoang trong thế giới hậu tận thế
- **Cốt truyện**: Người chơi phải sống sót qua nhiều ngày bằng cách loot đồ và tránh quái vật
- **Gameplay chính**:
  - Ban ngày: Quái vật bất động, người chơi khám phá – loot
  - Ban đêm: Quái vật di chuyển, người chơi phải trốn vào **phòng an toàn**

---

## 🔧 Công nghệ

- **Ngôn ngữ**: C++
- **Thư viện đồ họa**: [Raylib](https://www.raylib.com/)
- **Kiểu game**: 2D Top-down

---

## 🎮 Gameplay chính

| Yếu tố            | Mô tả |
|-------------------|-------|
| 🎮 Di chuyển       | Sử dụng phím WASD hoặc mũi tên để di chuyển |
| 🌗 Ngày / Đêm      | Cứ 30 giây chuyển giữa ngày và đêm |
| 👾 Quái vật        | Bất động ban ngày, di chuyển ban đêm |
| 🛡️ Phòng an toàn  | Nếu người chơi ở trong phòng an toàn khi trời tối → an toàn |
| ☠️ Game Over       | Nếu bị quái vật chạm vào ban đêm |

---

## 🧱 Cấu trúc biến

| Tiền tố | Kiểu dữ liệu | Ví dụ                  |
|---------|--------------|------------------------|
| `n_`    | `int`        | `n_dayCount`, `n_score` |
| `f_`    | `float`      | `f_timer`, `f_speed`   |
| `b_`    | `bool`       | `b_isNight`, `b_inSafeRoom` |
| `v2_`   | `Vector2`    | `v2_playerPos`         |
| `r_`    | `Rectangle`  | `r_safeRoom`           |
| `ch_`   | `char`       | `ch_name`              |
| `str`   | `string`     | `str_name`             |
---

## 📌 Tiến độ

- [x] Thiết kế nhân vật
- [x] Di chuyển người chơi
- [ ] Hệ thống ngày/đêm
- [ ] AI quái vật ban đêm
- [ ] Phòng an toàn
- [ ] Hệ thống loot đồ
- [ ] Giao diện đơn giản (HUD: ngày, giờ, trạng thái)

---

## 💡 Ghi chú khác

- Game sử dụng asset đơn giản để mô phỏng map
- Có thể mở rộng: nhiều loại quái vật, bản đồ lớn hơn, hệ thống crafting...

---

## 👨‍💻 Tác giả

**Dead Supermarket** được phát triển bởi Hoàng Lộc  
Sử dụng Raylib – thư viện C++ mã nguồn mở.

