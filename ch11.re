= オープンソース

//noindent
[RMS: この章でのみ引用文をいくつか削除した。削除した内容はオープンソースに関するもので、私の人生または仕事と無関係なものだった。]

1995 年 11 月、自由ソフトウェア財団のメンバーで 1994 年に出版された「UNIXの1/4世紀」という本の著者でもあるピーター・サルス（Peter Salus）は、GNU プロジェクトの「システムに関する議論用」メーリングリストのメンバーへ論文募集の呼びかけをした。カンファレンスの議長に予定されていたサルスは、マサチューセッツ州ケンブリッジでまもなく開催される、自由に再配布可能なソフトウェアをテーマにしたカンファレンスを仲間のハッカーに知らせておきたかったのだ。1996 年 2 月に予定され、自由ソフトウェア財団がスポンサーをするそのイベントは、自由ソフトウェアだけを対象とした初の技術会議だったが、GNU 以外の自由ソフトウェアのプログラマとの団結を示すために「GNU、Linux、NetBSD、386BSD、FreeBSD、Perl、Tcl/tk、その他の、コードにアクセスすることができて再配布可能なツール」に関する論文を歓迎した。サルスは書いている。

//quote{
この15年間に、自由で低コストなソフトウェアが至るところに存在するようになりました。このカンファレンスは、いろいろ異なるタイプの、自由に再配布可能なソフトウェアの実装者とそうしたソフトウェアの（色々なメディアでの）パブリッシャーを引き合わせることになるでしょう。チュートリアルや参照論文が用意され、リーナス・トーバルズとリチャード・ストールマンが基調講演を行います@<fn>{1}。
//}

サルスのメールを受け取った人の中にカンファレンスの委員のエリック・S・レイモンドがいた。そのメーリングリストの他のメンバーのようにプロジェクや会社のリーダーではなかったものの、いくつかのソフトウェア・プロジェクトと、ガイ・スティール（Guy Steele）が十年前に出版したハッカー辞典の大増補版の新ハッカー辞典の編者をしたことにより、レイモンドは、ハッカーコミュニティの中でかなりの評価を得ていた。

レイモンドにとって、1996 年のカンファレンスは願ってもないイベントだった。彼は自由ソフトウェア運動の理想を完全に支持していたわけではなかったが、いくつかの GNU プログラム、とくに GNU Emacs に貢献していた。それらの貢献は 1992 年、レイモンドがオフィシャルな GNUヴァージョンのGNU Emacs をストールマンと議論せずに変更する権限を要求したときに終わった。ストールマンはその要求を断り、レイモンドはストールマンの「細かいことに口を出す運営」を非難した。「僕が Emacs LISP ライブラリをきれいに書き換えようとしたら、リチャードは僕が無権限で修正することに大騒ぎしたんだ」とレイモンドは回想する。「とても失望して、彼とはもう一緒に作業しないと決めたんだ。」

仲たがいはあったが、レイモンドは自由ソフトウェアのコミュニティで活動を続けた。それで、サルスがカンファレンスでストールマンとトーバルズの二人に基調講演をさせることを提案したとき、レイモンドは逸る思いでその考えを支持した。ストールマンが年長で知恵豊かな ITS/Unix ハッカーを代表し、トーバルズが若くてエネルギッシュな Linux ハッカーの一団を代表することで、この組合わせは団結を示す象徴的なショーであり、レイモンドのような野心的で若めの（つまり、40 歳以下の）ハッカーには特に得るところが大きかった。「僕は両方の陣営に足をつっこんでいたからね」とレイモンドは言う。

カンファレンスまでに、二つの陣営の間の緊張は明白になった。それでも両陣営に共通していることが一つあった。カンファレンスはフィンランドから来た生身の神童に会う初めての機会だった。意外にも、トーバルズは魅力的で人好きのする講演者だった。わずかにスウェーデン訛りがあったが、トーバルズは、素早い控え目なウィットで聴衆を驚かせた@<fn>{2}。

もっと驚いたのは、とレイモンドは言う、最も著名なハッカーのリチャード・ストールマンを含む、他の著名なハッカーに対してトーバルズが等しく言いたい放題だったことだ。カンファレンスの終わるときまでに、トーバルズの半ばハッカー的で半ばスラッカー的な態度は、カンファレンス参加者の年長組も若手も同じように惹きつけていた。

「あれが転機だった」とレイモンドは回想する。「1996 年以前は、リチャードがハッカー文化全体のイデオロギー上の指導者の資格を満たす唯一の人間だった。彼と意見を異にしても、公然と異を唱える者はいなかった。そのタブーを打ち破ったのがトーバルズだ。」

究極のタブー破りは、このショーの終り近くにやってきた。増大するマイクロソフト Windows の市場支配やそれに類する話題を議論しているときに、トーバルズはマイクロソフトのパワーポイントというスライドショー・ソフトウェアプログラムのファンであることを認めた。伝統的なソフトウェア純粋主義の立場からすれば、それは奴隷廃止論の集会で自分の奴隷の自慢をするようなものだった。トーバルズや増えつつある彼のフォロワー達の立場からすれば、それはただの常識だった。どうして主義主張だけで便利な占有的ソフトウェアプログラムを遠ざけるんだ？彼らはその点について全く同意しなかった。自由が犠牲を求めたとき、自由を気にしない人々にとっては、それは禁欲に見えて、何か重要なものを獲得する方法には見えなかった。ハッカーであることは、禁欲ではなく、仕事を成し遂げることだ。そして彼らにとって「仕事（the job）」は実際的に定義されていた。

「あれを言うのはかなりショッキングだった」とレイモンドは振りかえる。「しかし、1995 年と 1996 年までに彼は急激に影響力を獲得しつつあったから、それができたんだ。」

ストールマンの方では、1996 年のカンファレンスで緊張があった覚えはない。たぶん、トーバルズがそれを発言したときにいなかったのだ。しかし、後にトーバルズの有名な「無礼さ」の棘を感じたのを覚えている。「Linux の文書に、GNU のコーディングの標準をプリントアウトして破り捨てろ、と言っているものがありました」とストールマンはその一例を語る。「良く見ると、彼が不同意だというのは、それの最も重要性の小さい部分で、推奨する C コードの書き方の部分でした。」

「よし分かった、つまり彼は我々の習慣のいくつかに異論があるんだ。それはいいでしょう。でも、それを言うのに随分意地の悪いなやり方を選んだものです。『こういう方法でコードをインデントするべきだ』とも言えたはずです。それでいい。敵意はいりません。」

レイモンドにとって、他のハッカーがトーバルズのコメントに寄せた暖かい歓迎は、彼の疑念を裏付けていた。すなわち、Linux 開発者と GNU 開発者を隔てている境界線は、ほとんど世代的なものだった。トーバルズのような多くの Linux ハッカーは、占有的ソフトウェアの世界の中で育ってきた。彼らは自由でないソフトウェアに何か不正を見て自由ソフトウェアに貢献し始めたのではなかった。彼らの大半にとって、便利さより大事なものはなかった。技術的にプログラムが劣っていなければ、ライセンスの問題だけでプログラムを拒む理由はなかった。いつかハッカーがパワーポイントに代わる自由ソフトウェアを開発するかもしれない。そうなるまで、なぜマイクロソフトやパワーポイントを批判するのか、使えばいいのに。

これは自由そのものの価値を認める人々と、主にソフトウェアの強力さと信頼性に価値を置く人々との間の、自由ソフトウェア・コミュニティ内の不和の一例だった。ストールマンは、前者を「自由党」と呼んで、コミュニティ内の政党のように二つの陣営に言及した。他方の陣営の支持者はそれに名前をつけようとしなかったので、ストールマンは軽蔑的にそれを「時流党」とか「成功党」と呼んだ。彼らの多くが第一目標として「より多くのユーザーの獲得」を掲げていたからだった。

GNU プロジェクトを開始して以来の十年間で、ストールマンはプログラマとして、とてつもない名声を築いた。そしてソフトウェアの設計のマネージメントと人のマネージメントとの両方で非妥協的だという評判も築いた。これは部分的には真実だったが、評判はまた、ストールマンがしてもいないことを、誰でも好きなときに引き合いに出す便利な口実を提供した。評判は誤った推測を増幅させた。たとえば、1996 年のカンファレンスの少し前に、自由ソフトウェア財団は職員が完全に欠員状態になるという経験をした。それらの職員の辞職後にサルスが雇った自由ソフトウェア財団の現在の職員、ブライアン・ニューマンス（Brian Youmans）は、当時の様子を回想する。「一時、ピーター[・サルス]だけがオフィスで働いている職員だったんです。」ブリット・ブラッドリー（Bryt Bradley）が彼女の友人に 1995 年に語ったように、前の職員たちは事務局長のせいで不幸だった。

//quote{
[名称省略]（FSF の事務局長）は、先週、医療的/政治的な休暇から戻ってくる決定をしました。オフィスのスタッフ（ゲナ・ビーン、マイク・ドレイン、そして私）は、彼女が上司では働いていけないと確信しました。彼女は休暇をとる前に多くの職務上の誤りを犯していたからです。個人が不当な解雇の脅しを受けたという多くの事実、オフィスのスタッフすべてに対する暴言と言うべき多くの事実がありました。私たちは（何度も）彼女に、上司としては復帰しないように求め、しかし同僚としてならば喜んで働こうと言いました。私たちの求めは無視されました。私たちは辞めました。
//}

問題の事務局長は、次に、ストールマンに最後通牒を与えた。オフィスの全ての権限を彼女に与えなければ辞めるというのである。FSF の理事長として、ストールマンは、彼女に活動の全権を与えることを断った。それで彼女は辞職し、彼女の替わりに、ストールマンはピーター・サルスを採用したのだった。

これらの人々が FSF を去ったと聞いたとき、部外者であるレイモンドは、ストールマンのせいだと思い込んだ。これは、GNU プロジェクトのすべての問題はストールマンのパーソナリティにあるとする彼の説の裏付けを提供するものだった。

レイモンドにはもう一つ持論があった。当時の Hurd の開発遅延や Lucid-Emacs の分裂のようなトラブルは、通常、ソフトウェアコードの開発ではなく、ソフトウェアプロジェクトの運営に関係するものだ、というのである。

自由に再配布可能なソフトウェアのカンファレンスが終わると、レイモンドはすぐに自分のお気に入りのソフトウェア・プロジェクトに取り組み始めた。「フェッチメール（fetchmail）」という名前のメール受信ユーティリティである。トーバルズがきっかけになって、レイモンドは、ソースコードをできるだけ早く頻繁に更新する約束をつけた自分のプログラムを公開した。ユーザーがバグレポートや機能提案を送ってくるようになれば、ごちゃごちゃになると最初レイモンドは予想したが、できあがったソフトウェアは驚くほど堅牢になるのがわかった。トーバルズ的なアプローチの成功を分析して、レイモンドはすぐに分析結果を発表した。インターネットを「ペトリ皿」にして、そしてハッカーコミュニティの厳しい精査を自然淘汰の一形式として使うことで、トーバルズは集権的計画ではない進化モデルを創造したのだ。

その上、とレイモンドは断ずる、トーバルズはブルックスの法則をすり抜ける方法を見つけた。IBM の OS/360 プロジェクトのマネージャで、1975 年に出版された『人月の神話』の著者、フレッド・P・ブルックス（Fred P. Brooks）が初めて明確に語ったブルックスの法則は、プロジェクトに開発者を増員してもプロジェクトを更に遅らせる結果にしかならない、と考える。大部分のハッカーと同様に、ソフトウェアはスープのように限られた人数のコックで作るのが良いと信じていたレイモンドは、何か革命的なものが作用していると感じた。調理場にコックをどんどん招くことで、実は、トーバルズは出来上がるソフトウェアをより良いものにする方法を見つけていたのだ@<fn>{3}。

レイモンドは自分の観察を紙に書き出した。彼はそれをスピーチに仕立てると、ペンシルベニア州チェスター郡の友人と隣人のグループの前で早速披露した。「カテドラルとバザール（The Cathedral and the Bazaar）」と名付けたそのスピーチは、他の場所で皆が使っていた「カテドラル」スタイルと、トーバルズが創った「バザール」スタイルとを対比していた。

反応は熱狂的だったとレイモンドは言う、だがドイツの GNU/Linux ユーザーが集まった翌年春の 1997 年 Linux 会議で受けた熱狂にはとうてい及ばなかった。

「その会議では講演の終りにスタンディングオベイションを受けたんだ」とレイモンドは振りかえる。「僕はそれは二つの意味で重要だと思った。一つには、彼らが講演内容に興奮したということ。もう一つは、言葉の壁のある講演を聞き終わった後なのに彼らが興奮していたことだ。」

最終的にレイモンドはその講演を、同じ『カテドラルとバザール』と題した論文に書き直す。[訳注: レイモンドが命名に使ったカテドラルは、キリスト教の司教座のある大聖堂のこと。『伽藍とバザール』というエキゾチックなタイトルで日本語訳（後注 4 ）がある。] その論文の題名は、レイモンドによる議論の中心をなす例えからとったものだ。これまで、プログラムは「カテドラル」で、感動的、集権的に計画化され、時の試練にも耐えられるように建てられたものだった。他方、Linux は「沸騰する大バザール」にずっと似ていて、緩い分権的なインターネットの力学を通して開発されるソフトウェア・プログラムだった。レイモンドの論文は、彼とストールマンと他の多くが使っていたカテドラル方式を、特に GNU プロジェクトとストールマンに結びつけ、ストールマンとトーバルズの対比として、開発方式の対照性を強調していた。ストールマンは、彼に選ばれしカテドラル建築家の古典的モデル──つまり、18 ヶ月の間姿を消し、GNU C コンパイラみたいなものを携えて戻ってこれるプログラミングの「魔法使い（wizard：ウィザード）」──だったが、トーバルズは、むしろディナーパーティの愛想のよいホストに近かった。他の人達に Linux の設計に関する議論を先導させたり、テーブル全体でレフェリーが必要な場合だけ介入することで、トーバルズは彼自身のくつろいだパーソナリティをかなり反映した開発モデルを作り上げた。トーバルズの視点から見れば、最も重要な運営上の役割は、制約を課すことではなく、アイデアの流れを維持することだった。

レイモンドは以下のようにまとめる。「ぼくはリーナスのいちばん賢く、影響力のあるハックは、Linux のカーネルそれ自体の構築ではなく、むしろ Linux 開発モデルの発明だったと思う。」@<fn>{4}

これらの二つの開発方式の説明は鋭かったとしても、カテドラル方式（それはレイモンド自身を含む、他の全ての人々が使っていたものだった）の連想をストールマンと特別に結びつけていたのは全くの中傷だった。事実、GNU Hurd を含む幾つかの GNU パッケージの開発者は、レイモンドの論文のようにさらに分析して広く代弁することはしなかったが、レイモンドが試みるより前にトーバルズのやり方について読んでそれらを採用していた。レイモンドの論文を読んだ何千人という多くのハッカーが、この中傷で GNU に対する否定的態度に導かれたはずだ。

トーバルズの運営が成功した秘訣をまとめることで、レイモンドは、自由ソフトウェア・コミュニティ内の自由を優先しない他のメンバーの関心をひきよせた。彼らは企業の関心を自由ソフトウェアの使用と開発に向けさせるため、ビジネスにアピールする価値の観点、強力で、信頼性が高く、安く、先端的だということから問題を取り上げることに決めた。レイモンドは、これらのアイデアの最も知られた提案者となり、彼らはネットスケープ（Netscape）の経営陣を獲得した。ネットスケープの占有的ブラウザは、やはり占有的ブラウザであるマイクロソフトのインターネット・エクスプローラに対して市場シェアを失いつつあった。ネットスケープの役員は、レイモンドのスピーチに興味をそそられて、そのメッセージを本社に持ち帰った。数ヶ月後の 1998 年 1 月、ネットスケープは今後の開発にハッカーの支援を得られることを願い、主力製品のウェブブラウザ、ナビゲーター（Navigator）のソースコードを公開する計画を発表した。

Netscape の CEO ジム・バークスデール（Jim Barksdale）が、会社の決定に大きな影響を与えたのはレイモンドのエッセイ、『カテドラルとバザール』であると引用したとき、レイモンドは瞬く間にハッカーのセレブの地位に昇格した。彼は何人かの人々を会合に招待した。それには、VA リサーチの創立者ラリー・オーガスチン（Larry Augustin）、出版社のオライリー・アンド・アソシエイツ（O'Reilly & Associates）の創立者、ティム・オライリー（Tim O'Reilly）、ナノテクノロジーを専門とするシリコンバレーのシンクタンクであるフォーサイト・インスティテュート（the Foresight Institute）の会長、クリスティーン・ピーターソン（Christine Peterson）が含まれていた。「会合の課題は一点に集約された。どうしたら ネットスケープの決定を利用して、他の企業がこれに倣うようにさせられるだろうということだ。」

レイモンドは、そこで行われた会話は覚えていないが、最初に出てきた苦情を覚えている。ストールマンや他のハッカーは、フリーソフトウェアの「フリー」という言葉は自由の意味で価格ではないことを皆に覚えてもらおうとして、最善の努力を尽くしてきたが、そのメッセージはいまだに浸透していなかった。たいていの企業幹部は最初にフリーソフトウェアという用語を聞くと、フリーという言葉を「ゼロコスト」の同義語と解釈し、そこから先のメッセージにすぐ耳を貸さなくなってしまう。ハッカーがこの認識の不一致を切り抜ける方法を見つけるまで、ネットスケープの後でさえ、自由ソフトウェア運動は高い壁に直面していた。

自由ソフトウェアという大義の前進に積極的関心を持つ組織を率いるピーターソンは、別の用語を提案した。オープンソース（open source）である@<fn>{5}。

当時を振り返り、宣伝業界で働く友達とネットスケープの決定について議論している間にオープンソースという用語を思いついたとピーターソンは言う。その用語を思いついたのがどこからだったか別の分野から借りてきたのだったかは思い出せないが、その用語を友人が嫌ったことは覚えている。5

その会合では反応は劇的に違っていた、とピーターソンは言う。「私はそれを提案するのを躊躇していました」とピーターソンは振り返る。「私はグループを代表する立場ではなかったし、それでオープンソースという言葉をさりげなく持ち出しました。新しい用語として強調するのではなくね。」ピーターソンには意外なことに、その用語は評判が良かった。会合が終わるまでに、レイモンドを含む参加者のほとんどが、その用語を喜んでいるように見えた。

レイモンドによれば、モジラの始動パーティから一日二日経つまで、彼は公けの場で「自由ソフトウェア」に代わる「オープンソース」という用語を使わなかったが、そのときオライリーが自由ソフトウェアについて語る会議の予定を立てたのだ、という。その会議を「フリーウェア・サミット」と呼んだオライリーは、メディアやコミュニティの注目を、ネットスケープにモジラのリリースを促した他の価値あるプロジェクトにも向けさせたかったと言う。「こうした人達はみんな共通点が多いのに、お互いに知らないので驚きました」とオライリーは言う。「自由ソフトウェアの文化がすでに、いかに大きなインパクトを与えているのか世界に知らせたいとも思いました。みんな自由ソフトウェアの伝統の大部分を見逃していたんです。」

しかし、招待リストをまとめるにあたり、オライリーは長期的に政治的影響を及ぼすことになる、ある決定をした。彼は招待リストを、Perl の作者のラリー・ウォール、sendmail の作者エリック・オールマン（Eric Allman）、BIND の作者ポール・ヴィクシー（Paul Vixie）ら、西海岸の開発者に限定することにした。もちろん、例外はあった。モジラの始動のため、すでに町にいたペンシルベニアの住人レイモンドはすぐに招待された。ヴァージニア在住の Python の作者、グイド・ヴァン・ロッサム（Guido van Rossum）も同様だった。「うちの編集長で社内で一番 Python に詳しいフランク・ウィリソン（Frank Willison）が、まず僕に確認しないで彼を招待したんです」とオライリーは振りかえる。「彼が来てくれたのは嬉しかったけれど、始めは本当にローカルな集まりだったんですよ。」

推移を見守る人達には、招待リストにストールマンの名前を入れたがらないことで、彼を冷遇しているように見えた。「それでイベントに行かないことにした」とペレンズはサミットを振りかえって言う。一方、出席したレイモンドは、ストールマンを入れるのは無益だと主張したと言う。イベントのホストを務めるオライリーがソフトウェア・マニュアルの著作権の問題を巡ってストールマンと公然と争っているという事実のために、ストールマンを冷遇しているという噂はさらに強まった。その会議よりも以前から、ストールマンは、自由ソフトウェアのマニュアルは自由ソフトウェアのプログラムと同様に、自由にコピーや修正が可能であるべきだと主張していた。一方、オライリーは、自由でない本の付加価値市場は、より広範なコミュニティに自由ソフトウェアへのアクセスを可能にすることでその有用性を高めていると主張した。二人はイベントのタイトルを巡っても対立していた。ストールマンは政治的な重みのない「フリーウェア」でなく、「フリーソフトウェア（自由ソフトウェア）」にこだわっていた。フリーウェアの用語は、たいてい、無料で使えるプログラムをさしていたが、それらはソースコードがリリースされていないから、自由ソフトウェアではなかった。

今振り返っても、オライリーはストールマンの名前を招待リストから外した決定を冷遇と見ない。「当時、僕はリチャードに直接会ったことは全然なかったんですが、電子メールのやり取りでは、彼は頑固で、対話に乗り気じゃありませんでした。僕はその会合に GNU の伝統を代表する人が必要だと思って、個人的に知っていた、ジョン・ギルモアとマイケル・ティーマンを招待しました。彼らなら GPL の価値に熱心でも、自由ソフトウェアのさまざまなプロジェクトや伝統の強み・弱みについて、快く率直な意見交換をやってくれるだろうと思ったからです。その後の大騒ぎを考えると、僕はリチャードも招待すべきだったのだと思いますが、僕がそうしなかったことを、GNU プロジェクトやリチャード個人に対する敬意が欠けていたからだと解釈すべきじゃないと思っています。」

冷遇があったにせよなかったにせよ、オライリーもレイモンドも、「オープンソース」という用語は、サミット出席者から成功といえる十分な賛同を得たと言う。出席者はアイデアと経験を共有し、自由ソフトウェアのイメージを向上させる方法についてブレインストーミングを行った。主な関心は、マイクロソフトの Windows に対する GNU/Linux の挑戦を強調することではなく、特にインターネットの基盤領域での自由ソフトウェアの成功を示す方法にあった。しかし、以前の VA での会合と同様、議論はすぐに「フリーソフトウェア」という用語が抱える問題になった。サミットのホストを務めたオライリーは、サミット参加者のトーバルズのコメントを思い出す。

「リーナスはその当時シリコンバレーに引っ越してきたばかりで、『フリー（free）』という言葉が、英語では「自由（libre）」と「無料（gratis）」という二つの意味を持っていることをつい最近知ったばかりだと説明したんです。」

シグナスの創業者マイケル・ティーマンは、「フリーソフトウェア」という厄介な用語に替わる用語として、ソースウェア（sourceware）を提案した。「誰も気乗りしなかった」とオライリーは振りかえる。「そのときにエリックが『オープンソース』という用語を口にしました。」

その用語は一部の気持をとらえたが、全員が公式用語の変更を支持するにはほど遠かった。一日限りのカンファレンスの終わりに、出席者は三つの用語──フリーソフトウェア、オープンソース、そしてソースウェア──を投票にかけた。オライリーによると、15 名の出席者のうち 9 名が「オープンソース」に投票した。まだこの用語にけちをつける人もいたが、参加者全員がこれから報道される議論ではそれを使用することで同意した。「連帯のメッセージを携えて締めくくりたかったんです」とオライリーは言う。

オープンソースという用語が語彙目録に入るまで時間はかからなかった。サミットから間もなく、オライリーは、ニューヨーク・タイムズ、ウォールストリート・ジャーナル、その他有名どころの出版社の記者が出席する記者会見に、サミットの出席者を率いて行った。数ヶ月後に、トーバルズの顔がフォーブス誌の表紙を飾り、ストールマン、Perl の作者のラリー・ウォール、アパッチ・チームのリーダーのブライアン・ベーレンドルフ（Brian Behlendorf）の顔が特集記事に現れた。オープンソースはビジネスにオープンだった。

ティーマンのようなサミット出席者にとって、連帯のメッセージこそ最も重要なものだった。彼の会社は自由ソフトウェアのツールやサービスを販売してかなりの成功を収めていたが、他のプログラマや経営者が直面する困難に気づいていた。

「フリー（自由/無料）という言葉の使用は疑いなく多くの状況で混乱をもたらしていました」とティーマンは言う。「オープンソースという言葉は、ビジネスフレンドリでビジネスに配慮する立場です。自由ソフトウェアは、道徳的に正しい立場。良かれ悪かれ、オープンソース仲間に足並みをそろえることはさらに有利になると考えました。」

会議の後、新しい用語のオープンソースを知らせて、それを使うかどうかを聞くために、レイモンドはストールマンに電話をかけた。ストールマンはその用語を採用するかどうかちょっと考たが、結局ボツにした。「僕はそれについて直接個人的に話したから知っているんだ」とレイモンドは言う。

ストールマンのとっさの反応は、「ぼくはそれについて考えなきゃいけないね」というものだった。その翌日、彼は、今後「オープンソース」について語られるときは確実にレイモンドとオライリーの価値観が支配するだろう、公の場で自由ソフトウェア運動という思想を維持する最善の方法は伝統的用語を捨てないことだ、と結論付けた。

1998 年の後半にストールマンは彼の立場を発表した。「オープンソース」は自由ソフトウェアの技術的利点を伝えるのに役立つが、話し手がソフトウェアの自由の問題に口をつぐむことも助長した。それは「無料ソフトウェア」という意図しない意味を回避したが、「自由を尊重するソフトウェア」という意図した意味も回避していた。後者の意味を伝える手段としては、従って、使いものにならなかった。実際には、レイモンドとオライリーは、コミュニティ内の非理想主義的政党に名前を与えていたのだ。ストールマンが同意しない政党に。

加えて、ストールマンは「オープンソース」という概念は人々を、ビジネスからの支持の獲得を過度に強調するように仕向けていると考えた。そのような支持はそれ自身必ずしも悪くはないが、それに必死になり過ぎると有害な妥協につながることを懸念した。「Negotiation 101 によれば、誰かの同意を得るのに必死になると、不利な取引を呼び込むことになるのです」と彼は言う。「ノーと言える用意が必要です。」トーバルズ自らが「リナックス」コミュニティの「カミングアウト・パーティ」と宣伝したイベント、1999 年のリナックスワールド・コンヴェンション・アンド・エクスポで、ストールマンは自分の立場を要約して、仲間のハッカー達に、安易な妥協というエサに負けないように求めた。

「どれだけのことができるかを示してきたのだから、必死になって企業に協力したり、目標を妥協する必要はありません」と、パネルディスカッションでストールマンは言った。「オファーは受け入れますが、ぼくらのしていることを変えてまで、助けてもらおうとする必要はないのです。目標に向かって一歩踏み出すことができるし、次の一歩またその次の一歩と歩んでいくことができます、そうすることで実際に目標に到達するでしょう。そうする代りに、中途半端な手段を講じて、次の一歩を踏み出さないこともできますが、それでは決して目標に到達しないでしょう。」

しかし、リナックスワールド・ショーの前でさえ、ストールマンはオープンソースのサポーターを遠ざけることにますます意欲を示していた。フリーウェア・サミットの数ヶ月後、オライリーは年次の第二回 Perl カンファレンスを開催した。今回はストールマンも出席していた。自由ソフトウェアのアパッチ・ウェブサーバを商用製品に採用するという IBM の決定を称賛するパネルディスカッションで、ストールマンは聴衆に与えられるマイクを使い、Tcl スクリプト言語の作者であるパネリストのジョン・オウスターハウト（John Ousterhout）に鋭い非難を浴びせた。ストールマンは、オウスターハウトに自由ソフトウェア・コミュニティの「寄生虫」という烙印を押したが、それはオウスターハウトの創業した会社、スクリプティックス社（Scriptics）を通じて Tcl の占有的ヴァージョンを売り込んでいたからだ。オウスターハウトは、スクリプティックス社は Tcl の自由ヴァージョンの改良には最小限の貢献しかしないと述べていた。それは実際上、その小さな貢献で、コミュニティから自由でないソフトウェアの大規模な開発への承認を勝ち取ろうということだった。ストールマンは、この立場を退け、スクリプティックス社のプランを非難した。仲間の聴衆たちからの叱制に対して、「Tcl が引き続き存在していくのにスクリプティックス社が必要だとは思わない」と、ストールマンは言った@<fn>{6}。

「あれはかなり見苦しい光景でした」とプライム・タイム・フリーウェアのリッチ・モーリンは振りかえる。「ジョンは、Tcl や Tk や Sprite でとても尊敬すべきことを成し遂げています。彼は本物の貢献者です。」ストールマンとストールマンの立場には共感するが、モーリンはストールマンの売り言葉に悩まされた人達のほうに同情した。

ストールマンは謝ったりしない。「占有的ソフトウェアを批判することは見苦しいことではありません。占有的ソフトウェアこそ、見苦しいのです。オウスターハウトが過去に本物の貢献をしたのはその通りですが、ポイントはスクリプティックス社がほとんど百パーセントの占有的ソフトウェア会社になろうとしていたことでした。あのカンファレンスでは、自由を支持することは、ほぼ全員に異を唱えることを意味していました。聴衆としての発言なので、ぼくは少ししか話すことができませんでした。すぐ忘れられないように問題をとりあげる唯一の方法は、それを強い言葉で言うことでした。」

「トーバルズが瑣末な事柄について敵意のある事を言うのを『感心できないが面白い』と言いながら、ぼくが誰かの行動について真剣な批判をするときに『もめ事を起こす』と言って非難する人達は、ダブルスタンダードを適用しているように思います。」

ストールマンの物議を醸した批判は、一時的に、潜在的支持者のブルース・ペレンズを遠ざけることになった。1998 年にエリック・レイモンドは、「オープンソース」という用語の使用を監視し、自社製プログラムをオープンソースにすることに関心を持つ企業にオープンソースの定義を提供する組織、オープンソース・イニシアティブ（OSI）を立ち上げることを提案した。レイモンドは、その定義の起草者にペレンズを起用した@<fn>{7}。

ペレンズはその後、OSI がストールマンと FSF に対立して設立されたことに遺憾の意を表明して OSI を辞任することになろう。それでも、自由ソフトウェア財団の後援を受けない自由ソフトウェアの定義の必要性を振り返り、ペレンズは他のハッカーがいまだに距離を置く必要を感じるかもしれない理由が分かる。「リチャードは本当に好きだし素晴らしいんだ」とペレンズは言う。「リチャードにもっとバランスがあったら、彼の仕事はもっとうまくいくのに。二ヶ月ぐらい自由ソフトウェアから離れたっていいんだよ。」

ストールマンの力では、オープンソース支持者の宣伝の勢いにほとんど対抗できなかった。1998 年 8 月、半導体メーカーのインテルが GNU/Linux ベンダーのレッドハットの株を購入したときに、それを報じたニューヨーク・タイムズの記事は、レッドハットを「自由ソフトウェアあるいはまたオープンソースとして知られる運動」の成果と書いた@<fn>{8}。半年後、ジョン・マーコフ（John Markoff）のアップル・コンピュータの記事は、見出しで、アップルは「オープンソースの」アパッチ・サーバを採用と発表した@<fn>{9}。

こうした勢いは、「オープンソース」という用語を積極的に利用した会社の増大する勢いと同時にすすんだ。1999 年 8 月に、自らを「オープンソース」として熱心に売り込んでいた会社のレッドハットが、ナスダック（Nasdaq）に上場した。その年の 12 月、VA リナックス──かつての VA リサーチ──の新規株式公開が歴史的な効果をもたらした。1 株 30 ドルで始まった VA リナックスの株価は、最初の取引で爆発的に値上がりして 300 ドルを突破し、終値でも 239 ドルの水準に戻しただけだった。好運にも VA 株を最も安く手に入れ、取引終了まで持ち続けた株主は、紙の上の資産としては 698 % の増加を体験することになった。ナスダックの新記録だった。エリック・レイモンドは、取締役会のメンバーとして、三千六百万ドル相当の株を所有していた。しかし、これらの高値は束の間のものだった。それはドットコム・バブルの終わりとともに崩壊した。

オープンソース支持者のメッセージは簡単だった。自由ソフトウェアのコンセプトを売りこむのに必要なのは、それを事業主に優しいものにすることだ。彼らにはストールマンと自由ソフトウェア運動は市場と闘っているように見えた。彼らはその代わりに、それを活用することを追求した。高校の仲間外れの役割を演じるのではなく、彼らはセレブのゲームを演じ、その過程で力を強めていった。

これらの方法はオープンソースに大成功をもたらしたが、自由ソフトウェアの理想にではなかった。「メッセージを広める」ためにしたことは、その最も重要な部分、倫理的問題としての自由の理念を省略することだった。この省略の結果は、今日、目に見えるものになっている。2009 年現在、ほとんどすべての GNU/Linux ディストリビューションは占有的プログラムを含んでいて、Linux のトーバルズのヴァージョンは占有的ファームウェアを含んでいる。そして、以前、VA リナックスと呼ばれた会社は占有的ソフトウェアをベースにビジネスをしている。世界のウェブ・サーバーの過半はアパッチのいずれかのヴァージョンを走らせていて、アパッチの通常のヴァージョンは自由ソフトウェアだが、それらの多くのサイトで IBM が配布している占有的に修正されたヴァージョンが走っている。

「彼の最悪の時には、リチャードはリーナス・トーバルズと僕が共謀して、彼の革命を乗っ取っとろうとしてると思い込んでいたんだ」とレイモンドは言う。「オープンソースという言葉に対するリチャードの拒絶と、僕の見解の中に彼が入念に持ち込んだイデオロギー的な溝は、理想主義と縄張り意識の奇妙な混合から来ている。世の中には、それはみんなリチャードの個人的なエゴだと信じる人もいる。僕はそう思わない。それよりも、自由なソフトウェアという理念と自分自身を結びつけすぎて、その理念を脅かすものは何でも彼自身を脅かすものに見えるんだ。」

ストールマンは次のように答えている。「レイモンドは、ぼくの見解を正確に言わない。ぼくはトーバルズが誰かと『共謀』すると思いません。こそこそしたやり方は彼のやり方じゃないからね。それでも、レイモンドの汚らわしい振る舞いは、彼の言動そもものから明らかです。功罪についての僕の意見に答えるよりも（彼が答えていると主張するときでさえ）、彼はそれらの心理学的解釈を提案します。彼は匿名の誰かのものだというどぎつい解釈を考え、次に、それより少し軽蔑的なものを提案してぼくを『弁護』します。彼はこのやり方でよくぼくを『弁護』してきました。」

皮肉にも、オープンソースとレイモンドのようなオープンソース主唱者の成功は、ストールマンのリーダーとしての役割を衰退させなかった。しかし、それは彼が何のリーダーなのかについて、多くの人々を誤解させることになった。自由ソフトウェア運動は、オープンソースのように企業やメディアから認知されていなかったので、GNU/Linux の大半のユーザーはその見解はおろか、その存在さえ聞いたことがなかった。彼らはオープンソースのアイディアや価値について聞いていたが、ストールマンに別の見解があるとは思ってもみなかった。かくして、彼は「オープンソース」を擁護してくれたことに感謝するメールを受け取ることになるが、彼は返信でその支持者になったことはないことを説明し、自由ソフトウェアについて送信者に知識を与える機会にした。

ライターによっては "FLOSS" という用語を使うことで、「自由ソフトウェア」という用語を受け入れている。FLOSS は、「自由（Free/Libre）とオープンソース（Open Source）のソフトウェア（Software）」を表す。しかし、彼らは、しばしば一つの FLOSS 運動があると言う。それはアメリカには一つの「リベラル/保守」運動があると言うのに似ている。そして、この想像上の一つの運動に関連付けられている見解は、たいてい、彼らの聞かされてきたオープンソースの見解である。こうした障害は様々あるが、自由ソフトウェア運動もたまにはその思想が聞き届けられ、絶対的な意味では成長を続けている。信念を守り、オープンソースと対比してその思想を提示して確実な地歩を得ている。「ストールマンの性格の基本的な特徴の一つは意見を変えないことです」とイアン・マードックは言う。「もしそれだけの時間が必要なら、人々が彼の考え方に同調するまで十年でも待つのです。」

マードック自身は、その譲らぬ気質に励まされるし貴重なものを見いだす。ストールマンはもう自由ソフトウェア運動の孤独な指導者ではないかもしれない。だが、今でも自由ソフトウェア・コミュニティの北極星だ。「彼が自分の考え方をこの先も一貫していくことは、あなたもおわかりでしょう」とマードックは言う。「たいていの人はそうはいかない。賛否はともかく、あれは本当にリスペクトしないといけません。」

==== 後注

//footnote[1][Peter Salus, "FYI-Conference on Freely Redistributable Software, 2/2, Cambridge" (1995) (archived by Terry Winograd) ピーター・サルス『FYI - 自由に再配布可能なソフトウエア、2月2日、ケンブリッジ』（1995）を参照。（テリー・ウィノグラッドによりアーカイブ） http://bat8.inria.fr/~lang/hotlist/free/licence/fsf96/call-for-papers.html ]

//footnote[2][リーナス・トーバルズはフィンランド人だが、母語はスウェーデン語である。『The Rampantly Unofficial Linus FAQ』に簡潔な説明がある。 http://catb.org/~esr/faqs/linus/ 『フィンランドには、無視できない数(約6%)のスウェーデン語を話すマイノリティ人口がある。彼らは自らを「finlandssvensk」あるいは「finlandssvenskar」と呼び、自分たちをフィンランド人だと考えている。彼らの家族の多くは、数世紀に渡ってフィンランドで暮らしてきた。スウェーデン語は、フィンランドの二つの公用語の一つである。』]

//footnote[3][ブルックスの法則とは、ブルックスの著作の次の引用を手短に要約したものだ。『ソフトウェアの構築は、本来体系的な活動──複雑な相互関係を伴う実践──であるから、物事を伝えるための労力も並大抵ではなく、それが分業がもたらす個々人の作業時間の節減分をすぐに食い潰すようになる。だから、増員はスケジュールの短縮ではなく遅延をもたらす。』Fred P. Brooks, The Mythical Man-Month (Addison Wesley Publishing, 1995) フレッド・P・ブルックス『人月の神話』（アジソン・ウェズレー出版、1995年）を参照。]

//footnote[4][Eric Raymond, "The Cathedral and the Bazaar" (1997) を参照。日本語訳、エリック・レイモンド『伽藍とバザール』http://cruel.org/freeware/cathedral.html ]

//footnote[5][Malcolm Maclachlan, "Profit Motive Splits Open Source Movement（儲け主義がオープンソース運動を分裂させる）," TechWeb News (August 26, 1998）を参照。 http://www.techweb.com/article/showArticle? articleID=29102344 ]

//footnote[6][前掲書]

//footnote[7][Bruce Perens et al., "The Open Source Definition," The Open Source Initiative (1998) ブルース・ペレンズ他『オープンソースの定義』オープンソース・イニシアティブ(1998年) を参照。 http://www.opensource.org/docs/definition.html ]

//footnote[8][Amy Harmon, "For Sale: Free Operating System," New York Times (September 28, 1998) アミー・ハーモン『売出し中：自由なオペレーティング・システム』ニューヨーク・タイムズ（1998年9月28日）を参照。 http://www.nytimes.com/library/tech/98/09/biztech/articles/28linux.html ]

//footnote[9][John Markoff, "Apple Adopts `Open Source' for its Server Computers," New York Times (March 17, 1999) ジョン・マーコフ『アップル、サーバー・コンピュータに「オープンソース」を採用』ニューヨーク・タイムズ（1999年3月17日）を参照。 http://www.nytimes.com/library/tech/99/03/biztech/articles/17apple.html ]

