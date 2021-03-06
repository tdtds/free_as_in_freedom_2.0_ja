= 截然とした道徳的選択

1983 年 9 月 27 日、Usenet のニュースグループ、net.unix-wizards に接続したコンピュータ・プログラマは、いつもと違ったメッセージに遭遇した。深夜、正確には午前 12 時 30 分に投稿され、rms@mit-oz と署名されたメッセージの件名は、そっけないが人目を引いた。「新しい UNIX の実装」とある。だが、メッセージに Unix（ユニックス）の新ヴァージョンの紹介はなく、メッセージの最初のパラグラフが動員の呼びかけで始まっていた。

//quote{
今年の感謝祭から、私は Unix と完全に互換性のあるソフトウェアシステム、GNU（Gnu's Not Unix; Gnu は Unix に非ず）を書き始めます。
それを使える人には誰にでも無料で差し上げます。時間とお金、プログラムと機材での貢献が大いに必要です@<fn>{1}。
//}

経験を積んだ Unix の開発者にとって、このメッセージは理想主義と自信過剰を混ぜ合わせたものだった。著者はすでに成熟した Unix オペレーティング・システムを土台から再構築すると誓い、そのうえ、あちこちを改良することまで提案している。著者が予測する新しい GNU システムは、テキストエディタや Unix 互換アプリケーションを走らせるシェルプログラム、コンパイラ、「そしてその他いくつか」の一般的コンポーネントすべてを持っている@<fn>{2}。さらに、プログラミング言語 Lisp をベースにしたグラフィック・ユーザー・インターフェイスやクラッシュ耐性化されたファイルシステム、それに MIT のインターナル・ネットワーキング・システムに基づいたネットワーキング・プロトコルのような、まだ Unix システムが提供していない魅力的な機能がたくさん含まれるという。

「GNU は Unix プログラムを実行できるでしょうが、全く同じものにはならないでしょう」と著者は書く。「他のオペレーティング・システムの経験を基礎にして、便利なものならどんな改良でもするつもりです。」

読者側に懐疑的な反応があることを見越して、著者はオペレーティング・システムの概要を補足する「私は誰か」と題した略歴を加えた。

//quote{
私はリチャード・ストールマンです。たくさん模倣されたオリジナル EMACS エディタの考案者で、今は MIT の人工知能研究所にいます。コンパイラ、エディタ、デバッガ、コマンドインタプリタ、非互換時分割システム（ITS）や Lisp マシン・オペレーティング・システムについて広く取り組んできました。ITS 端末の独立ディスプレイのサポートを開拓し、Lisp マシンにクラッシュ耐性ファイルシステムを一つ、ウィンドウシステムを二つ実装しました@<fn>{3}。
//}

不運にも、ストールマンの夢のような GNU プロジェクトは、感謝祭の開始日よりも遅れた。しかし、1984 年の 1 月までに、ストールマンは約束を果たし、彼は Unix のソフトウェア開発の世界に完全に没頭していった。ITS 育ちのソフトウェア設計者にとって、それはまるでムーア様式のイスラム宮殿の代わりに郊外型ショッピングモールを設計するようなものだった。しかし、それでも、Unix 的オペレーティング・システムを作ることには隠れた利点がいくつもあった。強力だったが、ITS にはアキレス腱があった。MIT のハッカーは、ITS を DEC 社製の強力な PDP-10 マシンに特化させていた。しかし、AI ラボの管理者が 1980 年代初頭に研究所の PDP-10 を段階的に廃止する選択をしたとき、かつてハッカーが活気ある都市に例えたオペレーティング・システムは瞬く間にゴーストタウンになってしまった。一方、Unix は、移植性を目指して設計され、そのような危険に対する免疫を持っていた。最初に AT&T の下級エンジニアたちによって開発されたプログラムは、企業経営者のレーダーを逃れ出て、資金繰りの厳しい大学のコンピュータシステムに安住の地を見つけた。Unix の開発者たちは、MIT の同胞たちよりも小さなリソースを使いながら、雑多な寄せ集めのハードウェアシステムに、すなわち、大半の AI ラボのハッカーからは小さなタスクに見合うだけだと思われていた 16 ビットの PDP-11 から、やがて VAX 11/780 のような 32 ビットのメインフレームに至るすべてに、ソフトウェアを載せるべくソフトウェアをカスタマイズした。1983年までには、性能的にはずっと旧式の PDP-10 相当のマシンに普及してきたこのオペレーティング・システムを利用して、著明なサン・マイクロシステムズを初めとするいくつかの企業が、「ワークステーション」と名付けられたより強力な世代のデスクトップコンピュータを開発するまでになっていた。

移植を容易にするために、Unixの主要部分を設計していた開発者たちは、ソフトウェアとマシンの間に必ず抽象レイヤーを置くようにした。AI ラボのハッカーが ITS や PDP-10 でしたように、マシンタイプに特有の命令で書くのではなく、Unix の開発者はオペレーティングシステムを、C と呼ばれる高級言語で書いた。実際のコンポーネント自体ではなく、オペレーティング・システムの多くのサブコンポーネントをとりまとめるインターフェイスや仕様の噛み合わせに焦点を合わることで、彼らはどんなマシンでも走るようにすぐに修正できるシステムを作り上げた。もし、ユーザーがあるコンポーネントを気に入らなければ、インターフェイス仕様のおかげで、個別のサブコンポーネントを抜き出し、それを改善したり、もっと良いもので置き換えることができた。簡単に言うと、Unix アプローチは、柔軟性と経済性を向上させ、急速に受容されていった@<fn>{4}。

ストールマンが GNU システムの開発を始めようと決心したきっかけは、AI ラボのハッカーたちが長い間育ててきた ITS システムの死だった。ITS と AI ラボのハッカーコミュニティの死は、ストールマンにとってトラウマ的な打撃だった。ゼロックスのレーザープリンタのエピソードが占有的ソフトウェアの不正義を彼に認識させたとすれば、コミュニティの死は彼に占有的ソフトウェアに降伏するかそれに反対するかの選択を迫った。

ITS を構成したソフトウェアコードがそうであるように、ITS の死の起源も、それ以前の時期に遡ることができる。1980 年までに、ラボの大半のハッカーは、Lisp マシンとそのオペレーティング・システムの開発に従事していた。

1950 年代後期の MIT の人工知能研究者の一人で、人工知能研究のパイオニアであるジョン・マッカーシー（John McCarthy）がつくった Lisp（リスプ）はエレガントな言語で、不規則な構造をもつデータを操作する複雑なプログラムを書くのに適している。この言語の名前は LISt Processing（リスト・プロセッシング）を略したものだ。マッカーシーがスタンフォード大学人工知能研究所へ転任するのに伴い、MIT のハッカーたちはこの言語を磨き上げて MACLISP という名前の方言を作り出した。MAC とは、DARPA より資金提供され、AI ラボとコンピュータ・サイエンス研究所を創設することになった研究プロジェクト、プロジェクト MAC のことを指している。AI ラボの大物ハッカー、リチャード・グリーンブラットを先頭に、1970 年代後期の AI ラボのプログラマたちは、Lisp が効率的で都合良く走ることに特化したコンピュータ、Lisp マシンを設計し、そのための完全に Lisp ベースのオペレーティング・システムを開発した。

1980 年までに、ハッカーの二つのライバルグループが、Lisp マシンのコピーを製造販売する二つの会社を設立した。グリーンブラッドは、Lisp マシン社（Lisp Machines Incorporated）を始めた。彼は外部からの投資を避けて「ハッカーの会社」を作ることを計画していた。大部分のハッカーは、従来型のスタートアップであるシンボリクス社（Symbolics）に参加した。1982 年には、彼らは MIT で働くことをすっかりやめてしまった。

専念してくれるハッカーがほとんどいなければ、プログラムやマシンの修繕にはより時間がかかるか、全く修繕されないことになった。ストールマンによれば、さらに悪いことにラボの「人口構造の変化」が起きた。かつて AI ラボで発言力のある少数派だったハッカーが去っていった一方で、「（PDP-10を）心から愛していたわけではない教授や学生は、相変わらず多数派だったのです。」@<fn>{5}

1982 年、AI ラボは 12 歳を過ぎたメイン・コンピュータ PDP-10 を交代させた。デジタル社（Digital）の最新モデル、デックシステム 20 は、ユーザープログラムとの互換性は持っていたが、ハッカーが同じオペレーティングシステムを走らせ続けたければ、ITS の大幅な書き直しか「移植」が必要だった。研究所が所内のプログラミング人材の必要数を既に失ってることに恐れをなして、AI ラボの教授陣はデジタル社の開発したオペレーティング・システム、Twenex を押してきた。多勢に無勢、ハッカーたちは従うしかなかった。

「『システムを管理するハッカーがいなければ大惨事になる。商用ソフトウェアを使うべきだ』と（教授陣は）言うのです。」ストールマンは数年後にこう振り返っている。「『会社がシステムを保守してくれることを期待できる』と言っていました。後日彼らが完全に間違っていたことが分かるのですが、彼らは商用ソフトウェアを使うことにしたのです。」@<fn>{6}

最初、ハッカーたちは Twenex システムも打倒されたがっている、もう一つの権威のシンボルと見ていた。このシステム名（Twenex）自体が異議の申し立てだった。公式には DEC が TOPS-20 と名付け、PDP-10 用に配布していた占有的オペレーティングシステム TOPS-10 の後継ということになっていた。だが TOPS-20 は TOPS-10 を基にしているわけではなかった。それは、ボルト・べラネク・ニューマンが PDP-10 マシン用に開発した Tenex から派生したものだった。@<fn>{7} Twenex という呼び名を考案したハッカーのストールマンは、TOPS-20 という名前を使わないで済むようにその呼び名を思いついたのだという。「このシステムはトップと呼ぶにはほど遠かったから、そんな名前で呼ぶしかなかったんです」とストールマンは回想する。「それで、Tenex という名前に "w" をつけて、Twenex と呼ぶことにしました。」

//image[KL10_1979][KL-10 プロセッサを装備した PDP-10 マシン（AI ラボの PDP-10 と類似のもの）。スタンフォード人工知能研究所、1979年。]{
//}

Twenex (TOPS-20) システムを動かしているマシンにも、冷笑的に『オズ』というあだ名がついていた。ハッカー伝説の一つによれば、マシンにそのあだ名が付いたのは、端末に電源を供給するのに小型の PDP-11 を必要としたからだ。あるハッカーが、KL-10 と PDP-11 のセットアップを初めて見たときに、それを映画『オズの魔法使い』の中の大げさな魔法使いの登場場面になぞらえたのだ。「我こそは偉大で強いオズ」、そのハッカーは歌った。「コンソールのうしろの PDP-11 は気にしなさんな。」@<fn>{8}

最初に KL-10 に遭遇したハッカーは大笑いしたが、Twenex と遭遇したとき笑いはすぐに消し飛んだ。Twenex は組込みのセキュリティを誇っていただけでなく、このシステムのソフトウェア・エンジニアたちは、ツールやアプリケーションをそのセキュリティ・システムを念頭に設計していたのだ。コンピュータ・サイエンス研究所のセキュリティ・システムの場合にはパスワードを巡るいたちごっこだったものが、今やシステム管理を巡る徹底抗戦になった。システム管理者は、セキュリティがなければオズのシステムはより頻繁に不測のクラッシュに見舞われると主張した。ハッカーたちは、クラッシュはソースコードを徹底的に見直すことで回避できると主張した。しかし、残念ながらそのような総点検を実行する時間とやる気のあるハッカーの数は、システム管理者の主張が通ってしまうほど減少していた。

当初の方針は、ラボのメンバーであれば誰でもセキュリティの制限を回避できる「管理者特権」を持つことができるというものだった。しかし、「管理者特権」を持つ者は他の者のそれを奪うことができ、奪われた者はその特権を復活できなかった。この状況は、ある小グループのハッカーに、彼らを除く全員の「管理者特権」を取り消すことにより全権を掌握することへの誘惑を与えた。

パスワードを入手し、起動時にデバッガーを適用することで、ストールマンはこうした企てをうまく失敗させていた。二度目の「クーデター」を失敗させた後、ストールマンは AI ラボの全員に向けて警報を発した@<fn>{9}。

「また権力を握ろうとする試みが行われました」とストールマンは書いた。「今のところ、貴族勢力は撃退されています。」発信者を特定されないように、ストールマンはメッセージの署名を「自由オズ放送」とした。

この変装の正体は、透けて見えた。1982 年までにストールマンのパスワードと秘密主義嫌いは広く知れ渡っていたため、AI ラボの外にいたユーザーたちは ARPAnet を経由してそこから彼のアカウントを使っていた。ARPAnet は研究助成金によるネットワークで、今日のインターネットの基礎になったものだ。1980 年代始めのこの種の「観光客」の一人に、カリフォルニアのプログラマ、ドン・ホプキンス（Don Hopkins）がいた。彼はハッカーの情報網を通じて、どの部外者も MIT 自慢の ITS システムにアクセスするには RMS というイニシャルと、システムからパスワードが要求されれば同じ三文字を入力すればいいことを知った。

「MIT が私やその他大勢に MIT のコンピュータを自由に使わせてくれたことを、私は永遠に感謝します」とホプキンスは言う。「大勢の人間にとって、それは大きな意味があったのです。」

ITS 時代には MIT の管理者側も大目に見ていたこのいわゆる「観光客」ポリシーは@<fn>{10}、研究所の ARPAnet に最初につながるマシンがオズになってからは捨てられた。当初はストールマンも仲間が後から同じ手順で入れるようにログイン ID とパスワードを同じにするポリシーを続けていた。しかし、オズの脆弱さのため、時間が経つにつれ、全くの偶然あるいは悪意をもってシステムをダウンさせるかもしれない部外者たちを閉め出すように管理者たちは動いた。やがてこの管理者たちから自分のパスワードを公開することを止めるよう求められると、ストールマンは自分の倫理観を引き合いに出して、オズシステムを使うこと自体を止めてしまった@<fn>{11}。

「MIT の AI ラボに初めてパスワードが登場した（ときに）、僕は自分の信念に従ってパスワードなしにする（ことを決めました）」と後に、ストールマンは語っている。「コンピュータにセキュリティを施すのが本当に望ましいとは信じませんでしたから、ぼくがセキュリティ体制を進んで手助けする筋合いではなかったのです。」@<fn>{12}

ストールマンが偉大で強力なオズの前に頭を下げるのを拒否したことは、1980 年代初期のハッカーと AI ラボの管理者との間に高まっていた緊張を象徴していた。だが、この緊張もハッカーのコミュニティ自体の内部で起きていた争いに比べれば色褪せてしまう。DEC システム 20 が到来したころには、ハッカーのコミュニティは既に二つの陣営に分裂していた。LMI 社とシンボリクス社である。

シンボリクス社は、外部からの投資資金を使って多方面の AI ラボハッカーを募り、AI ラボの後援を受けていない Lisp マシン・オペレーティングシステムのパーツを改良する仕事につけていた。1980 年の終わりには、同社はLisp マシンの自社ヴァージョンを開発するために 14 人の AI ラボ職員をパートタイム・コンサルタントとして雇っていた。ストールマンを除く残りの何人かは、LMI 社のために働いた@<fn>{13}。ストールマンは、プレッシャーのない AI ラボの生活を選び、どちらかの側に立つことを望まず、どちらの会社にも参加しないことに決めた。

最初、他のハッカーたちは彼らの時間の一部を依然として MIT で使い、MIT の Lisp マシン・オペレーティングシステムに貢献した。LMI 社もシンボリクス社も、このコードを MIT からライセンスされていた。ライセンスは、両者が加えた変更について MIT に報告することを求めていたが、MIT にこれらの変更を再配布させることを求めていなかった。しかし、1981 年までは、それを許諾するという紳士協定が守られていて、彼らによる全てのシステムの改良は MIT ヴァージョンに含まれたので、Lisp マシンの全ユーザーがそれを共有できた。この状況のおかげで、MIT に残った者たちも中立的でありえた。

ストールマンは 1982 年の 3 月 16 日という日付をよく覚えている。その日は彼の誕生日で、シンボリクス社の役員たちがこの紳士協定を終わらせた日だからだ。動機は LMI 社に対する攻撃だった。LMI 社が抱えるハッカーは少なく、全体の職員数も少ないから、システムの改良を共有することによる利益は主に LMI 社が得ている、とシンボリクス社の役員は考えたのだ。システムコードの共有を止めることで、彼らは、LMI 社を一掃することを望んだ。そこで、シンボリクス社は、ライセンスを字句通りに行使することにした。LMI 社も利用できる、MIT ヴァージョンのシステムに彼らの改良を寄付するかわりに、MIT のユーザーが走らせることのできる、シンボリクス社ヴァージョンのシステムを提供した。それを使う者は、シンボリクス社にのみテスト・サービスを提供することになり、改良したときにも、十中八九シンボリクス社だけに役立つだろう。

ラボの Lisp マシンを最新の状態に保つ責任のある（最初の二ヶ月間はグリーンブラットに手伝ってもらった）人間として、ストールマンは激怒した。シンボリクス社のハッカーは数百の未完成コードを残していて、それはエラーを引き起こした。発表を「最後通牒」と見なした彼は、シンボリクス社から研究所へのマイクロ波通信を切断して対抗した。それからシンボリクス社のマシンでは決して作業しないと宣言し、シンボリクス社から LMI 社を守るために、MIT のシステムを開発し続けることを誓った。「僕の見方では、AI ラボは第二次大戦のときのベルギーのような中立国でした」とストールマンは言う。「ドイツがベルギーを侵略したら、ベルギーはドイツに宣戦布告して英仏の側に立ちます。」

彼らの最新機能が依然として MIT の Lisp マシンのシステムに出現し、ひいては、LMI 社の Lisp マシンにもあることに気づいたシンボリクス社の役員たちは面白くなかった。ストールマンは著作権法の規定が何を求めているのか知っていたので、機能をゼロから書き直した。彼はシンボリクス社が MIT に提供するソースコードを読む機会を利用して、問題点と改善点を理解し、彼の加えた変更が間違いなく全く別のやり方になるようにした。しかし、シンボリクス社の役員はそれを信じなかった。彼らはストールマンのコンピュータ端末に「スパイ」プログラムをインストールして、ストールマンに不利な証拠を探した。しかし、彼らが MIT 当局にこの問題を 1983 年初頭に訴えたとき、彼らはわずかな証拠しか提出できなかった。両バージョンのソースが変更されていてかつ似ているように見える箇所は、1ダースしかなかった。

AI ラボの管理者がシンボリクス社の証拠なるものをストールマンに見せると、彼はそれを否定して、類似性は実際にはバージョンが分かれる前から持ち越されたものであることを示した。そして論理の矛先を反対側に向けた。彼が書いた数千行に対して、シンボリクス社がこれよりましな証拠を出せないというなら、コピーを避けるためのストールマンのまめな努力は有効だったと証明されたことになる。AI ラボはストールマンの仕事を是認し、彼は 1983 年の終わりまでそれを続けた@<fn>{14}。だが、彼はやり方を変えた。「完全に安全でいるために、[新機能や主な変更点を知るために]向こうのソースコードを読むことは止めました。ドキュメントだけを使い、そこからコードを書いたのです。」非常に大きな新機能の場合には、シンボリクス社の文書がリリースされるのを待たずに、自分で設計し、その後、シンボリクス社の文書が出たときに、その機能に対するシンボリクス社のインターフェイスとの互換性部分を追加した。それから、彼らが直した小さなバグを見つけるためにシンボリクス社のソースコードの変更点を読み、それらを違うやり方で直した。

この経験はストールマンの決意を強化した。ストールマンはシンボリクス社の新機能を置き換えるための設計をする傍ら、AI ラボのメンバーを募って MIT のシステムを継続して使ってもらい、バグレポートが途切れずに提供されるようにした。MIT は、LMI 社が直接変更点にアクセスできるようにし続けた。「何が何でも、シンボリクスを懲らしめてやるつもりでした」とストールマンは語っている。そんな発言から分かることがある。それらはストールマンの非平和主義的な性格に光をあてるだけではなく、この衝突が引き金をひいた強い感情のレベルも反映している。

絶望が深かったのは、ストールマンがこれを「我が家」に対する「破壊」と見なしていたせいだ。つまり、AI ラボの固く結束したハッカー・サブカルチャーの終焉である。後にレヴィとの電子メールによるインタビューで、ストールマンは自分を歴史上の人物、1860 年代から 70 年代にかけてのインディアン戦争で絶滅させられた太平洋岸北西部のヤヒ族の最後の生き残り、イシになぞらえた。この喩えはストールマンの生存を叙事詩かほとんど神話の言葉に投影している@<fn>{15}。シンボリクス社のために働いていたハッカーたちはそれを違う風に見ていた。シンボリクス社を皆殺し勢力と見るかわりに、多くのストールマンの同僚はそれを遅ればせながらの適切な試みと見ていた。Lisp マシンの商品化の過程で、この会社は AI ラボという象牙の塔の境界内に端を発するエンジニア主導のソフトウェア・デザインというハッカーの原理を、経営者主導の設計原理が支配する企業の市場へと突き動かした。多くのハッカーはストールマンを、非妥協的人物というより、時代遅れの実践の代表者と見ていた。

個人的な敵意も状況に影響していた。シンボリクス社が AI ラボ職員のハッカーの大半を雇って連れ去っていく前ですら、後にシンボリクス社に参加するハッカーの多くは彼を避けるようになっていたとストールマンは言う。「チャイナタウンに行くときに、もうぼくを呼ばなくなりました」とストールマンは回想する。「グリーンブラッドが始めた習慣では、誰かがディナーに出かけるときは、ラボの誰かで他に行きたい者はいないかと聞いて回るか、メッセージを送るということになっていました。1980年か1981年のあるときから、それが来なくなりました。彼らは僕を招かないだけじゃなくて、後に告白されたんですが、僕ぬきでディナーに行っているのを秘密にするように嘘をつく圧力がかかっていたそうです。」

ストールマンは、この村八分のけちな方法に気持ちを傷つけられたものの、それに対して何かをすることはなかった。だがシンボリクス社の最後通牒は、問題を個人に対する拒否を越えて広い範囲に及ぶ不正行為に変えた。ライバルを倒す手段として、シンボリクス社が再配布の配布物にソースコードの変更点を含めないようにしたとき、ストールマンは、シンボリクス社の目論見を挫折させることを決心した。ストールマンは、MIT のオフィスにこもり、ソフトウェアの新機能と改修の一つ一つにそれと同等のものを書くことにより、LMI 社のユーザーを含む、MIT システムのユーザーが、シンボリクス社のユーザーと同じ機能にアクセスできるようにした。

また、それはハッカー・コミュニティでのストールマンの地位を伝説的なものにした。すでに Emacs の仕事で名声を得ていたが、シンボリクス社の全プログラマからなるチーム──数名の伝説的なハッカーを含むチーム──の成果に匹敵するストールマンの能力は、情報時代における、更に言えば、どんな時代であれ、人間的才能の最大級の発露だ。それを「巨匠のハック」、ストールマン自身を「コンピュータ・コードにおけるジョン・ヘンリーの化身」と呼んだ『ハッカーズ』の著者スティーヴン・レヴィは、シンボリクス社に雇われたライバルの多くが、理想主義者の元同志にしぶしぶ敬意を払わざるをえなかったことを注記している。レヴィはビル・ゴスパー（Bill Gosper）を引用する。ゴスパーは最終的にシンボリクス社で働くことにしたハッカーで、この会社のパロ・アルトのオフィスにいたが、この時期のストールマンの成果に対して驚きを表明している。

//quote{
ストールマンが書いたものを見て、出来が悪いと決めつけたかもしれません（多分そんなことはなかったでしょうが、誰かがそれが不出来だと信じ込ませることはできたかもしれません）。そうだとしても、「しかし、ちょっと待った。あちらじゃ、ストールマンは一晩中誰とも議論していないんだ。一人で働いているんだぜ！これを一人でやれるなんて信じられない！」と言ったでしょう@<fn>{16}。
//}

ストールマンにとって、シンボリクス社と追いかけっこをしていた数ヶ月は、誇りと深い悲しみが入り混じった感情を呼び起こす。第二次世界大戦に出征した父親を持つ、骨の髄までリベラルのストールマンは、平和主義者ではない。色々な意味で、シンボリクス戦争は十年前に AI ラボのスタッフに加わって以来、向かっていたものへの通過儀礼を提供していた。しかし、それはストールマンを十代の頃から養ってきた AI ラボのハッカー文化のトラウマ的な破壊と時を同じくしていた。ある日、コードを書くのを一休みしたとき、ストールマンは、トラウマ的な瞬間がラボの機器室を通り過ぎるのを体験した。ストールマンはそこで図体の大きな使われなくなった PDP-10 マシンに遭遇した。その眠っているライトにぎくりとした。かつては内部のプログラムの状態を表示する信号を黙って活発に明滅させていたライトだった。愛する家族の一員の、良く保存された遺体に出会ったときのように気持ちを揺さぶられたとストールマンは言う。

「機器室で泣き出しました」とストールマンは言う。「そこにあるマシンが、直してくれる者もなく死んでいるのを見て、コミュニティが完全に破壊されてしまったことを痛感したのです。」

ストールマンに悲しんでいる時間はなかった。それが多くの騒動を巻き起こし、製作に多大の努力を注ぎこんだとしても、Lisp マシンは、テクノロジー市場における大戦闘の余興に過ぎなかった。コンピュータの小型化の容赦ない速度は、より新しくより強力なマイクロプロセッサを呼び込み、それはまもなく、古代の荒野の村落を飲み込んでいく現代都市のように、マシンのハードウェアとソフトウェアの能力を統合していくことになる。

何百、何千という占有的ソフトウェア・プログラムがこのマイクロプロセッサの波に乗ったが、どれもユーザー・ライセンスと非開示契約（NDA）のつぎはぎで保護されていた。それはハッカーがソースコードをレヴューしたり共有したりするのを不可能にした。ライセンスは粗雑で不釣り合いなものだったが、1983 年までには強力になり、法廷を満足させ、割り込みたい者たちを追い払った。かつてソフトウェアは、高価なコンピュータ・システムという料理をよりおいしくするために、多くのハードウェア会社が提供した添え物だったが、すぐにメイン・ディッシュになった。新しいゲームや機能に飢えていたユーザーは、食後にレシピを反芻するという伝統的な要求を二の次にした。

パーソナル・コンピュータ・システムの領域ほど、この状況が明白なところはなかった。アップル・コンピュータ（Apple Computer）やコモドール（Commodore）のような会社は、組み込みのオペレーティング・システムのマシンを売ることによって、新たな百万長者になろうとしていた。 ハッカー文化やハッカー文化がバイナリのみのソフトウェアを嫌うことに気付くこともなく、パーソナル・コンピュータのユーザーの多くは、会社がソースコード・ファイルを添付していないことに抗議する必要があるとは少しも思わなかった。アナーキーなハッカー倫理の信奉者でこの新しい市場にその倫理を持ち込もうとした者も少しはいたが、たいていの場合、市場は、素早く新しいプログラムを書き、抜け目なくエンド・ユーザー・ライセンス規約を書いてプログラムにがっちり鍵をかけるようなプログラマに、報いた。

ハッカー文化やハッカー文化がバイナリのみのソフトウェアを嫌うことに気付くこともなく、パーソナル・コンピュータのユーザーの多くは、会社がソースコード・ファイルを添付していないことに抗議する必要があるとは少しも思わなかった。アナーキーなハッカー倫理の信奉者でこの新しい市場にその倫理を持ち込もうとした者も少しはいたが、たいていの場合、市場は、素早く新しいプログラムを書き、抜け目なくエンド・ユーザー・ライセンス規約を書いてプログラムにがっちり鍵をかけるようなプログラマに報いた。

これらのプログラマの中で最も悪名高い人物の一人が、ストールマンより二歳年下のハーヴァードのドロップアウト、ビル・ゲイツ（Bill Gates）だ。当時ストールマンは知らなかったが、ストールマンがニュースグループ net.unix-wizards にメッセージを送る七年前、ゲイツは、ソフトウェア開発者のコミュニティに自分の公開状を送っている。ゲイツは芽を出しかけの起業家で、アルバカーキに本社を置くソフトウェア企業、マイクロソフト（Micro-Soft; のちに綴りを Microsoft に変更）の共同経営者だった。マイクロソフトのソフトウェア・プログラムを PC ユーザーがコピーして使っていることに対して書かれた、ゲイツの「ホビイストへの公開状」は、共有的なソフトウェア開発という考え方を激しく非難していた。

「見返りなしでプロフェッショナルな仕事をする余裕が誰にあるだろうか」とゲイツは問いかけた。「プログラミングに三人年かけ、すべてのバグを発見し、製品を文書化して、無料で配布できるホビイストがいるだろうか。」@<fn>{17}

AI ラボのハッカーは、ほとんど誰もその公開状を見ていなかったが、ゲイツの 1976 年の公開状は、商業的なソフトウェア企業と開発者双方の、ソフトウェアに対する態度の変化を反映していた。市場がそう言っていないのに、どうしてソフトウェアをゼロ・コストの商品として扱うのか。時代が 1970 年代から 1980 年代に変わるにつれて、ソフトウェアの販売はコストの回収以上のものになった。それは政治的声明になった。レーガン政権が、大不況に続く半世紀の間に構築されてきた連邦規制と支出プログラムの多くを廃止すべく邁進していたとき、少なからぬプログラマがハッカー倫理を反競争的、ひいては非アメリカ的なものと見ていた。せいぜい、それは 1960 年代末と 1970 年代初期の反企業的態度への退行だった。フレンチ・カフスのシャツとダブルのスーツの間に古い絞り染めのシャツが隠れているのを見つけたウォールストリートの銀行家のように、多くのコンピュータ・プログラマは、ハッカー倫理を理想主義的な時代を思い出させる気恥ずかしいものとして扱った。

1960 年代全部を 1950 年代への回帰に費やした人間として、ストールマンは同僚と歩調が合わないことを気にかけなかった。しかし、ストールマンは、最良のマシンと最良のソフトウェアで仕事をしてきたプログラマとして、彼が「截然とした道徳的選択」と表現するほかないものに直面していた。すなわち、倫理的に「占有的」ソフトウェアに反対することをあきらめるのか、それとも、非占有的なソフトウェア・プログラムのシステムという別の選択肢の構築に自分の人生を捧げるのか、という選択である。占有的（proprietary；プロプライエタリ）ソフトウェアとは、ストールマンや彼の仲間のハッカーが、コピーや修正を制限する著作権条項やエンドユーザーライセンスを持つ一切のプログラムを表すために使っている用語である。シンボリクス社との2年間の戦いを経た後、ストールマンには後の選択肢を引き受ける自信があった。「コンピュータの仕事をすっかりやめてしまうこともできたと思います」とストールマンは言う。「ぼくには特別な技能はありませんでしたが、ウェイターになることはできたと思います。たぶん、しゃれたレストランではないでしょうが、どこかのウェイターにはなれたでしょう。」

ウェイターをする、つまり、プログラミングから完全にドロップアウトすることは、彼
に多くの喜びを与えてきた活動であるコンピュータ・プログラミングを、完全に諦める
ことを意味しただろう。ケンブリッジに引っ越して来てからの人生を振り返って、スト
ールマンはソフトウェア・プログラミングが唯一の喜びを与えてくれた多くの時を、容
易に見分けることができることに気づく。ドロップアウトするより、ストールマンはプ
ログラミングをやり抜くことにした。

無神論者のストールマンは、例えば、人生における宿命、カルマ、天命といった観念を拒否する。それにもかかわらず、占有的ソフトウェアを遠ざけつつ、他人が同じことをするのを助けるオペレーティング・システムを構築するという決心は、自然なものだったと感じている。結局、それはストールマン自身が、頑固さ、先見性、コーディングの名人芸を個人的に兼ね備えていたからであり、それがほとんど他の誰も、その存在に気づかなかった道の分岐点に彼を思い至らしめたのだ。『GNU プロジェクト』という論文の中で、ストールマンは、ユダヤの聖人ヒレルの言葉に要約された理念に賛同する。

//quote{
もし、私が私自身のためにいるのでないとしたら、誰が私のためにいるのだろうか。もし、私が私自身のためにのみいるのだとしたら、私は何なのだろうか。もし、今でなければ、いつだというのか@<fn>{18}。
//}

聴衆に語りかけるとき、ストールマンは、宗教的なアプローチを避け、プラグマチックな言葉でその決心を表現する。「自問してみました。一人のオペレーティング・システムの開発者が、状況を改善するために何ができるか、と。この疑問をしばらく吟味してみると、この問題を解決するのに必要とされているのは、まさに一人のオペレーティング・システム開発者だと気づきました。」

一度そう認識すると、他の全てのことは「落ち着くところに落ち着いた」とストールマンは言う。1983 年に、MIT はシンボリクス社から第二世代の Lisp マシンを入手しようとしていた。その上では、おそらく MIT の Lisp マシン・システムは走らないだろう。大半の MIT のマシンが置き換えられてしまったら、ユーザーからのバグ報告が得られないために効率的なシステムメンテナンスは続けられないだろう。彼は止めなければばならないだろう。しかし、彼は止めることを欲してもいた。MIT の Lisp マシン・システムは、自由ソフトウェアではなかった。ユーザーはソースコードを入手できたが、それを自由に再配布することはできなかった。さしあたり、MIT システムを存続させることの目標は達成されていた。LMI 社は生き残り、LMI 社自身のソフトウェアを開発していた。

ストールマンは、彼の古いコミュニティを破壊した者たちを罰することに全人生を費やしたくはなかった。彼は新しいコミュニティを建設したかった。彼は彼の倫理的信条に妥協を求めるソフトウェアを非難し、彼や他の人々がそれを逃れることを容易にするプログラムを創り出すことに人生を捧げることに決めた。自由ソフトウェアのオペレーティング・システムを構築することを誓約しながら、「さもなくば、死を。もちろん、年とってからね」とストールマンは軽口をたたき、1984 年 1 月に GNU を構築するために MIT の職員を辞めた。

辞職は、ストールマンの仕事を MIT の法的庇護から遠ざけた。それでも、ストールマ
ンは、MIT の施設を使い続けるとともに、後に自分のオフィスを保有するのに十分な友
人と同盟者を AI ラボの中に持っていた。また彼は、GNU プロジェクトの初期段階の費
用を賄うために、外部からのコンサルタント業務を確保する能力も持っていた。他方、
MIT を辞めたことで、ストールマンは、利益相反関係やソフトウェアに関する研究所の所有
権をめぐる議論を無効にした。大人になりたての頃、社会的孤立への恐れから AI ラボ
の抱擁の中へますますのめりこんでいった男が、今は彼自身とその環境との間に法的な
防火壁を築くようになっていた。

最初の数ヶ月間、ストールマンは Unix のコミュニティからも孤立して作業していた。net.unix-wizards ニュースグループへの彼の告知は共感的な反応を呼んだが、初期段階では十字軍への参加に応じる有志はほとんどいなかった。

「コミュニティの反応は、どこも同じでしたね」と当時の Unix ユーザー・グループのリーダー、リッチ・モーリンは回想する。「『おお、それは素晴らしいアイデアだね。コードを見せてよ。それができるところを見せてよ』とみんな言ってました。」

仕事が膨大であることに気づいたストールマンは、可能であればどこのものだろうと、既存の自由ソフトウェアを再利用してみることにした。そのために彼は GNU のプログラムとツールに転用できそうな既存の自由プログラムとツールを探し始めた。最初の候補の一つが VUCK という名前のコンパイラで、人気のプログラミング言語 C で書かれたプログラムをマシンで走行可能なコードに変換するものだった。オランダ語から翻訳すると、このプログラムの頭字語は自由大学コンパイラ・キットの意味だった。ストールマンは楽観的にも、プログラムの作者にプログラムは自由ですねと質問した。著者が、「自由大学」という言葉はアムステルダムの Vrije Universiteit（自由大学）を指しており、プログラムは自由ではないと告げると、ストールマンはがっかりした。

「彼は馬鹿にした調子で、大学は自由だが、コンパイラは自由ではない、と言ってきました」とストールマンは回想する。彼は助けるのを断ったばかりか、GNU を開発する計画から手を引いて、VUCK の販売を強化するようなアドオンを書いたらどうかとストールマンに提案してきた。見返りに利益を分けるという。「そこで、GNU プロジェクトのためのぼくの最初のプログラムは、複数の言語を扱える、マルチプラットフォームのコンパイラにすることにしました。」@<fn>{19}

VUCK のかわりに、ストールマンは、ローレンス・リバモア国立研究所（Lawrence Livermore National Lab）のプログラマが書いた、パステル(Pastel; いかがわしいパスカル）のコンパイラを見つけた。ストールマンにプログラムをあげたときに彼らが言うには、コンパイラはコピーや修正が自由だった。不運にも、プログラムは仕事に適さなかった。それは膨大なメモリを要求した。それは入力ファイル全体をコア・メモリーで構文解析し、ファイルのコンパイルが完了するまで全ての内部データを保持し続けた。メインフレーム・システムなら、この設計も許容できたが、Unix システムでは致命的な障壁だった。Unix を走らせる 32 ビットのマシンでさえ、しばしば、プログラムにそれだけのメモリーを提供できなかったからだ。ストールマンは、コンパイラに C 互換のフロントエンドを構築し、それを大きなメモリー空間を扱えるシステムである、より大きな Vax でテストすることにより、当初はかなり作業がはかどった。68010 にシステムを移植しようとしたときに、それがクラッシュする理由を調べて、メモリーの大きさの問題を発見し、まったく新しいコンパイラを一から構築する必要があるという結論に達した。ストールマンは、GNU C コンパイラ、すなわち、GCC を作ることで、最終的にこれをやることになる。だが、1984 年には、コンパイラについて何をすべきか明らかでなかった。そこで、それらのプランは固まるまで放っておき、その間 GNU の他の部分に注意を向けることにした。

かくして、ストールマンは、1984 年 9 月に Emacs の GNU ヴァージョンの開発を始めた。彼自身が十年にわたって監修してきたプログラムだ。Unix コミュニティには、二つのネイティブなエディタ・プログラムがあった。サン・マイクロシステムズの共同設立者のビル・ジョイ（Bill Joy）が書いた vi と、ベル研究所の科学者（そして Unix の共同創作者）のケン・トンプソン（Ken Thompson）の書いた ed だ。どちらも便利で人気があったが、どちらも、Emacs のような際限のない拡張可能性は提供していなかった。

当時を振り返ってストールマンは、この決定は戦略的な観点からではなかったと言う。「 Emacs が欲しかったんです。開発する良い機会でした。」

ここでもまた、ストールマンは時間を節約することを望んで既存のコードを見つけていた。Emacs の Unix ヴァージョンを書くにあたって、まもなく、ストールマンは、ゴスリング Emacs とか Gosmacs と名付けられた、C ベースの Emacs のヴァージョンの作者であるカーネギー・メロンの大学院生、ジェームス・ゴスリング（James Gosling）の足跡をたどって行った。Emacs のゴスリング・ヴァージョンには、Mocklisp と呼ばれる lisp 言語を簡易化した派生言語のインタープリタが含まれていた。ゴスリングは、Gosmacs を著作権の下に置き、個人所有のソフトウェア会社、ユニプレス社にその権利を売却していたが、ストールマンは、初期の Gosmacs の開発に参加していた仲間の開発者から保証を得ていた。その開発者によれば、ゴスリングはカーネギー・メロンの博士課程の学生だったときに、コードへの貢献と引き換えに、彼自身の Gosmacs のヴァージョンの配布する許可を彼に、電子メールで与えていた。

当初、ストールマンは、オリジナルの PDP-10 Emacs との完全な互換性を実装するのに、ユーザーレベルのコマンドだけを変更しようと思っていた。しかし、本物の Lisp と比べて Mocklisp の非力さが分かると、彼はそれを本物の Lisp システムと置き換えざるをえないと感じた。これは当然ながら、Gosmacs のハイレベルコードの大半を、Lisp のより強力な力と柔軟なデータ構造を生かして、全く違ったやり方で書き直させるものだった。1985年の中頃までにインターネットにリリースされた GNU Emacs では、Gosmacs 由来のコードは僅かなファイルに残っているだけだった。

ユニプレス社はストールマンのプロジェクトに気づき、もう一人の開発者が Gosmacs の独自ヴァージョンを配布する許可を受けていることを否認した。その開発者は自分の主張を裏付ける昔の電子メールのコピーを見つけることができなかった。ストールマンは Gosmacs から残っていた少しのモジュールを置き換えるコードを書いて、この問題を解消した。

しかし、開発者によるソフトウェアの権利の売却という観念や、そもそも開発者にソフトウェアを売る権利があるという観念に、ストールマンは腹が立った。1986 年のスウェーデン王立工科大学での講演で、ストールマンは、占有的ソフトウェアに伴う危険性のもう一つの例としてユニプレス社の事件を引用している。

「時々、思うことがあるんです。ひょっとして、自分の人生でできる最善のことは企業秘密になっている占有的ソフトウェアの巨大な山を見つけて、そのコピーの街頭配布を始めることなんじゃないだろうか。そうすれば、企業秘密なんかじゃなくなってしまう」とストールマンは言った。「多分、実際に自分で新しく自由ソフトウェアを書いて人にあげるより、自分にとってもずっと効率的でしょう。だけど、怖いから誰も受け取らないでしょうね。」@<fn>{20}

ゴスリングのコードに関する揉め事はストレスを生み出したが、長期的には、ストールマンと自由ソフトウェア運動の双方を助けることになる。それはストールマンに、問題のある派生物の出現を可能にしていた Emacs コミューンと形式ばらない信頼システムの弱点に取り組むことを強いた。それはまたストールマンに、自由ソフトウェア運動の政治的目標を研ぎ澄ますことを強いた。1985 年の GNU Emacs のリリースに続いて、ストールマンは、1983 年 9 月に投稿したオリジナルの声明を拡張した「GNU 宣言」を発表した。ストールマンはその文書の中に、占有的ソフトウェア・プログラムの横行を正当化するために、商業的プログラマやアカデミックなプログラマが使っている議論の多くを扱った長いセクションを含めている。その中の「プログラマの創造性は褒賞に値しないのか」という論考は、少し前のゴスリング Emacs のエピソードに関するストールマンの怒りを要約した回答になっている。

「褒賞に値するものがあるとすれば、それは社会的な貢献です」とストールマンは書いた。「創造性は社会的貢献でありえますが、それは社会がその結果を自由に使える場合のことです。プログラマが革新的なプログラムを創造して褒賞に値するとすれば、同じ理由により、これらのプログラムの使用を制限する人々は、罰に値するのです。」@<fn>{21}

GNU Emacs のリリースとともに、GNU プロジェクトはついに見せられるコードを持った。それはまた、ソフトウェアを基盤とする企業が等しく持つ負担をかかえることでもあった。多くの Unix 開発者がそのソフトウェアを使うようになるにつれて、お金や寄贈品やテープの注文が殺到し始めた。GNU プロジェクトのビジネス面に取り組むべく、ストールマンは仲間から何人かを選抜して、GNU プロジェクトをその目標に向かって加速するための非営利組織、自由ソフトウェア財団（FSF; Free Software Foundation）を設立した。ストールマンを理事長、多彩な友人とハッカーの同盟者を理事として、FSF は GNU プロジェクトに法人としての顔を提供する役目をした。

Lisp マシン社で働いていたプログラマ、ロバート・シャッセル（Robert Chassell）は、ストールマンとディナーで話をした後、自由ソフトウェア財団の五人の設立委員の一人になった。シャッセルは、財団の会計も担当した。その役割は始めたときは小さかったが、すぐに大きくなった。

「85年の支出と収入は、総額でおよそ 23,000 ドル程度だったと思います。」とシャッセルは回想する。「リチャードには自分のオフィスがあったので、我々はそこに場所を借りました。私は何でもかんでも、とくにテープは、私のデスクの下に置いていました。しばらくして、テープやその手のものを保管できる場所を LMI 社が貸してくれてもそうしていました。」

自由ソフトウェア財団は、顔の提供に加えて、幻想から醒めた他のプログラマたちのための重心も提供した。ストールマンが最初に GNU を発表をしたときでさえ非常に和気あいあいとしているように見えた Unix 市場は、ますます競争的になっていった。顧客を繋ぎ止めようとして、会社はユーザの Unix のソースコードへのアクセスを拒否し始めていた。この流れは進行中の GNU ソフトウェア・プロジェクトへの問合せの数を激増させた。かつてストールマンをやかまし屋の変人だと思っていた Unix ウィザードたちは、自分で確かめた問題を逃れることに希望を感じるか絶望を感じるかに応じて、今やストールマンをソフトウェアの預言者あるいはカサンドラ[訳注: 凶事の予言者]と見始めるようになった。

「多くの人は、ひとに取り上げられてしまうだけのソフトウェアの仕事に何年も費やすことが、どんなにがっかりするものか、自分の身に起こるまで気づきません。」FSF を設立して間もない頃、FSF に連絡をとってきた人々の感情と意見を要約してシャッセルは言う。「そんなことが二度も起きると、自問し始めるんです。『おい、ちょっと待てよ』と。」

シャッセルにとって、自由ソフトウェア財団に参加することを決めたのは、彼自身が経験した個人的な喪失感からだった。LMI 社の前に、シャッセルはケンブリッジ地区のソフトウェア会社、カドマス社（Cadmus, Inc.）に雇われて Unix の入門書を書いていた。カドマス社は、倒産に際して、その本に対する権利も道連れにした。シャッセルは権利を買い戻そうとしたが成功しなかったと言う。

「私の知る限り、あの本はまだどこかの棚の上にあって、使用不可、コピー不可で、システムから除外されているのです」とシャッセルは言う。「自分で言うのも何ですが、実に良い入門書でした。三、四ヶ月かければ、今日の GNU/Linux の入門として完全に使えるものにできるでしょう。私の記憶に残っているものを別にすれば、その全経験が失われてしまったのです。」

かつての雇い主が破産と闘っている間に、自分の著作が泥沼へ沈んで行くのを見ているしかなかったシャッセルは、ストールマンの脳卒中になりそうなほどの怒りの訳が分かる気がしたと言う。「私にとってはっきりしているのは、まともな生活をしたい人なら、自分の人生の一部から閉め出されるのを望むはずがない、という感覚です」とシャッセルは言う。「何であれ、何かを始め、完成し、修正する自由を持つという、この理念の全体が、本当の違いをつくりだすのです。そのとき、何年か生きた後で、価値あることをしたと、幸せに思えるのです。そうでなければ、それはただ取り上げられるか、投げ出されるか、放棄されるか、少なくとも、関係なくなってしまうのです。人生の一部が失われるようなものです。」

==== 後注

//footnote[1][『最初の GNU の告知』（1983年9月）リチャード・ストールマンを参照。]

//footnote[2][同書。]

//footnote[3][同書。]

//footnote[4][Marshall Kirk McKusick, "Twenty Years of Berkeley Unix," Open Sources (O'Reilly & Associates, Inc., 1999) 『バークレー Unix の 20 年』マーシャル・カーク・マクージック、「オープンソース」（株式会社オライリー・ジャパン、1999年）を参照。]

//footnote[5][リチャード・ストールマン（1986年）を参照。]

//footnote[6][同書。]

//footnote[7][複数の出典がある。リチャード・ストールマンとのインタビュー、ジェラルド・サスマンの電子メール、ジャーゴン・ファイル 3.0.0 を参照。 @<href>{http://catb.org/jargon/html/T/TWENEX.html} ]

//footnote[8][次を参照。 @<href>{http://www.as.cmu.edu/geek/humor/See_Figure_1.txt} ]

//footnote[9][リチャード・ストールマン（1986年）を参照。]

//footnote[10][『MIT AI ラボ観光客ポリシー』を参照。 @<href>{http://www.art.net/hopkins/Don/text/tourist-policy.html} ]

//footnote[11][リチャード・ストールマン（1986年）を参照。]

//footnote[12][同書。]

//footnote[13][Steven Levy, Hackers (Penguin USA [paperback\], 1984): 423.  『ハッカーズ』スティーブン・レビー（工学社）]

//footnote[14][H. P. ニューキスト(Newquist)が著書『頭脳制作者たち』('The Brain Makers')で、AI ラボがストールマンに Lisp マシンプロジェクトから離れているように申し渡した、と言うのは誤りである。]

//footnote[15][『ハッカーズ』で、スティーブン・レヴィがこの時期を念頭に、ストールマンを「最後の真のハッカー」と記述したとき、彼の意図した意味はあなたが思うものと違うかもしれない。レヴィは「真のハッカー」という用語を MIT のハッカー・コミュニティを他の二つのハッカー・コミュニティから区別するために使っている。後者は本の後の方で説明されており、別の名前が与えられている。[訳注:「真のハッカー」は第一部のタイトルでMITハッカーを指している。第二部はハードウェア・ハッカー、第三部はゲームハッカーである。\]このコミュニティがストールマンを一人残して溶解したとき、彼は結果的に最後の「真のハッカー」になった。レヴィは、他の者は誰も本当のハッカーではなかったと言おうとしているのではない。しかし、人々は、特にレヴィの本の説明を読んでいない人々は、彼の言葉をそのように解釈する傾向がある。ストールマン自身は、自らをレヴィの言葉を使って形容したことはない。]

//footnote[16][Steven Levy, Hackers (Penguin USA [paperback\], 1984): 426 日本語訳は、『ハッカーズ』スティーブン・レビー（工学社）]

//footnote[17][Bill Gates, "An Open Letter to Hobbyists" (February 3, 1976) 『ホビイストへの公開状』ビル・ゲイツ（1976年2月3日）。この公開状のオンライン上のコピーは次のサイトで見ることができる。 @<href>{http://en.wikipedia.org/wiki/Open_Letter_to_Hobbyists} ]

//footnote[18][次を参照。ストールマンはこの声明に脚注を加えて、「無神論者の一人として、宗教指導者に従うことはないが、彼らの中の或る者が述べた言葉に感心している自分に気付くことがある。」と書いている。 @<href>{http://www.gnu.org/gnu/the-gnu-project.html} ]

//footnote[19][Richard Stallman, "The GNU Operating System and the Free Software Movement," Open Sources (O'Reilly & Associates, Inc., 1999): 65.を参照。「GNU システムとフリーソフトウェア運動」、リチャード・ストールマン、『オープンソース』（株式会社オライリー・ジャパン、1999 年）。]

//footnote[20][リチャード・ストールマン（1986 年）]

//footnote[21][『GNU宣言』（1985 年）リチャード・ストールマン @<href>{http://www.gnu.org/gnu/manifesto.html} ]

