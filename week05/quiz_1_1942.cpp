using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Net.Mime.MediaTypeNames;
using System.Windows.Forms; //참조 추가

namespace quiz10_1_1942
{
    //② (object sender, EventArgs e) EventHandler 이벤트를 위한 델리게이트정의 => 상위 클래스 정의
    //③ 이벤트 선언 => 상위 클래스 정의
    //⑤ 이벤트 발생 => 자동 발생
    class ClickEventApp : Form
    {
        public ClickEventApp()
        {
            this.Text = "ClickEventApp";
            this.Click += new EventHandler(ClickEvent); //④ 이벤트 등록
        }
        private void ClickEvent(object sender, EventArgs e)
        { //1 이벤트 처리기 작성
            MessageBox.Show(" sender = " + sender.GetType());
        }

        public static void Main()
        {
            System.Windows.Forms.Application.Run(new ClickEventApp());
        }
    }
}
