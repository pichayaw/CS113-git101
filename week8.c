week8 Git

Git คือ Version control ที่คอยจัดเก็บความเปลี่ยนแปลงของไฟล์ในโปรเจคของ ไมว่าจะเปลี่ยนแปลงในโปรเจคเราก็สามารถที่จะรับรู้ได้
1)สร้าง directory ใช้คำสั่ง mkdir(ตามด้วยชื่อ directory)
2)ดูรายการ directories และ files ใช้คำสั่ง dir (cmd) ใช้คำสั่ง ls (Terminal๗
3)เปลี่ยนเป็น Drive D: (ใน MAC ไม่มี Drive D)
4)เปลี่ยน working directory ใช้คำสั่ง cd ตามด้วยที่เก็บ
5)เปลี่ยน working directory เป็น directory ที่บรรจุ working directory
  ใช้คำสั่ง cd ..
ุ6)เปลี่ยน working directory เป็น root directory ใช้คำสั่ง cd /
ึ7) ตรวจสอบสถานะของไฟล์ ใช้คำสั่ง git status
8)เพิ่มไฟล์เข้า ใช้คำสั่ง git add 
9)ตั้งค่าชื่อและอีเมลเพื่อระบุตัวผู้ commit ใช้คำสั่ง git config user.name "ชื่อ"
10)เพิ่มไฟล์เข้า ใช้ . (dot) แทนชื่อไฟล์ เพื่อให้ add ทุกไฟล์ที่มีการเปลี่ยนแปลงใน directory ปัจจุบัน ใช้คำสั่ง git add .
11)commit ไฟล์เพื่อเก็บ checkpoint ของไฟล์ ใช้คำสั่ง  git commit -m "Add ชื่อ" -m เป็นการกำหนดว่าเราทำอะไรไว้กับไฟล์ 
12)Checkpoint ทั้งหมด ด้วย git log adog ใช้คำสั่ง git log --all --decorate --oneline --graph

สร้าง Account ให้เรียบร้อย
- เชื่อม local repository (git repo ในเครื่องเรา) กับ github 
  ใช้คำสั่ง git remote add <ชื่อ remote เช่น origin> <git url>
- Checkpoint ทั้งหมดในเครื่อง
  ใช้คำสั่ง git log --all --decorate --oneline --graph
  
