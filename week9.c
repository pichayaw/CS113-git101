week9 git pull
git clone <git-url> //ดึงลิ้งมาใส่ เพื่อเอาข้อมูลมาลงในโฟลเดอร์
git branch <branch-name> //แยก working space
git branch //มี * ขึ้นหน้า space ที่เราทำงาน
git checkout <name> //เปลี่ยน space ที่จะทำงาน

การ Merge Branch
เพิ่มไฟล์ feature1.txt
git status
git add feature1.txt 
git commit -m "Add feature1.txt in branch feature"
เพิ่มไฟล์ master1.txt
git add master1.txt
git commit -m "Add master1.txt in branch master"

git log --all --decorate --oneline --graph //check point

git push origin master //push master ขึ้นใน git
git push origin feature //push feature ขึ้นใน git
//ทุกครั้งที่จะสลับ working space จะต้อง git checkout ทุกครั้ง

merge //การรวมไฟล์
git merge feature //รวม feature ให้อยู๋ใน master

Pull //การดึงไฟล์
แบบไม่มี Conflict
สร้าง directory ขึ้นมาใหม่
git clone <git-url> git102

Merge แบบมี Conflict
git checkout -b feature2 //สร้าง Branch feature2 และสลับไป Branch นั้นเลย
