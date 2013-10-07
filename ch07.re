= 率直な道徳的選択

1983 年 9 月 27 日、Usenet のニュースグループ、net.unix-wizards に接続したコンピュータ・プログラマは、いつもと違ったメッセージに遭遇した。深夜、正確には午前 12 時 30 分に投稿され、rms@mit-oz と署名されたメッセージの件名は、そっけないが人目を引いた。「新しい UNIX の実装」とある。だが、メッセージに Unix（ユニックス）の新ヴァージョンの紹介はなく、メッセージの最初のパラグラフが動員の呼びかけで始まっていた。

//quote{
今年の感謝祭から、私は Unix と完全に互換性のあるソフトウェアシステム、GNU（Gnu's Not Unix; Gnu は Unix に非ず）を書き始めます。
それを使える人には誰にでも無料で差し上げます。時間とお金、プログラムと機材での貢献が大いに必要です。@<fn>{1}
//}

経験を積んだ Unix の開発者にとって、このメッセージは理想主義と自信過剰を混ぜ合わせたものだった。著者はすでに成熟した Unix オペレーティング・システムを土台から再構築すると誓い、そのうえ、あちこちを改良することまで提案している。著者が予測する新しい GNU システムは、テキストエディタや Unix 互換アプリケーションを走らせるシェルプログラム、コンパイラ、「そしてその他いくつか」の一般的コンポーネントすべてを持っている。@<fn>{2} さらに、プログラミング言語 Lisp をベースにしたグラフィック・ユーザー・インターフェイスやクラッシュ耐性化されたファイルシステム、それに MIT のインターナル・ネットワーキング・システムに基づいたネットワーキング・プロトコルのような、まだ Unix システムが提供していない魅力的な機能がたくさん含まれるという。

「GNU は Unix プログラムを実行できるようになるでしょうが、全く同じものになるわけではありません」と著者は書く。「他のオペレーティング・システムの経験を基礎にして、便利なものをすべて改良するつもりです。」

読者側に懐疑的な反応があることを見越して、著者はオペレーティング・システムの概要を補足する「私は誰か」と題した略歴を加えた。

//quote{
私はリチャード・ストールマンです。たくさん模倣されたオリジナル EMACS エディタの考案者で、今は MIT の人工知能研究所にいます。コンパイラ、エディタ、デバッガ、コマンドインタプリタ、非互換時分割システム（ITS）や Lisp マシン・オペレーティング・システムについて広く取り組んできました。ITS 端末の独立ディスプレイのサポートを開拓し、Lisp マシンにクラッシュ耐性ファイルシステムを一つ、ウィンドウシステムを二つ実装しました。@<fn>{3}
//}

運命により、ストールマンの夢のような GNU プロジェクトは、感謝祭の開始日よりも遅れた。しかし、1984 年の 1 月までに、ストールマンは約束を果たし、彼は Unix のソフトウェア開発の世界に完全に没頭していった。ITS 育ちのソフトウェア設計者にとって、それはまるでムーア様式の宮殿の代わりに郊外型ショッピングモールを設計するようなものだった。しかし、それでも、Unix 的オペレーティング・システムを作ることには隠れた利点があった。ITS は、強力だったがアキレス腱があった。MIT のハッカーは、DEC 社が製造した PDP 系マシンに固有の利点を生かして設計をした。しかし、AI ラボの管理者が 1980 年代初頭に研究所の強力な PDP-10 を段階的に廃止する選択をしたとき、かつてハッカーが活気ある都市に例えたオペレーティング・システムは瞬く間にゴーストタウンになってしまった。一方、Unix は、移植性を目指して設計され、そのような危険に対する免疫を持っていた。最初に AT&T の下級エンジニアたちによって開発されたプログラムは、企業経営者のレーダーから抜け出し、資金繰りの厳しい大学のコンピュータシステムに安住の地を見つけた。Unix の開発者たちは、MIT の同胞たちよりも小さなリソースを使いながら、雑多な寄せ集めのハードウェアシステムに、すなわち、大半の AI ラボのハッカーからは小さなタスクに合うだけだと思われていた 16 ビットの PDP-11 から VAX 11/780 のような 32 ビットのメインフレームに至るすべてに、ソフトウェアを載せるべくソフトウェアをカスタマイズした。1983 年までに、最も有名なサンマイクロシステムズを含むいくつかの企業は「ワークステーション」と名付けたデスクトップ・コンピュータのさらに強力な世代を開発していた。それは、より古い世代の PDP10 の力に匹敵するパワーを持ったマシン上でますます偏在化するオペレーティングシステムの利点を生かしたものだった。

この移植性を円滑にするために、Unix の設計に従事していた開発者たちは、ソフトウェアとマシンの間に必ずもう一つ追加的抽象レイヤーを置くようにしていた。オペレーティングシステムを、AI ラボのハッカーが ITS や PDP-10 でしたように、特定のマシンのタイプの命令で書かないで、Unix の開発者は、C と呼ばれる高級言語で書いた。インターフェイスと仕様書が噛み合うことに焦点を合わせて、彼らはどんなマシンでも走るようにすぐに修正できるシステムを書いた。実際のコンポーネント自体よりも、むしろオペレーティング・システムの多くのサブコンポーネントをまとめるものに焦点を合わせた。もし、ユーザーがあるコンポーネントを気に入らなければ、インターフェイスの仕様書は、個別のサブコンポーネントを抜き出し、それを修繕し、あるいは置き換え、もっと良い何かにすることができた。簡単に言うと、Unix のアプローチは、柔軟性と経済性を促進するものだったため、急速に導入されていった。@<fn>{4}

ストールマンが GNU システムの開発を始めようと決心したきっかけは、AI ラボのハッカーたちが長い間育ててきた ITS システムの廃止だった。ITS と AI ラボのハッカーコミュニティの死は、ストールマンにとってトラウマ的な打撃だった。ゼロックスのレーザープリンタのエピソードが占有的ソフトウェアの不正義を彼に認識させたとすれば、コミュニティの死は彼に占有的ソフトウェアに降伏するかそれに反対するかの選択を迫った。

ITS を構成したソフトウェアコードがそうであるように、ITS 廃止の起源は、それ以前の時期に遡ることができる。1980 年までに、ラボの大半のハッカーは、Lisp マシンとそのオペレーティング・システムの開発に従事していた。

1950 年代後期の MIT の人工知能研究者の一人で、人工知能研究のパイオニアであるジョン・マッカーシー（John McCarthy）がつくった Lisp（リスプ）はエレガントな言語で、不規則な構造のデータを操作する複雑なプログラムを書くのに適している。この言語の名前は LISt Processing（リスト・プロセッシング）を略したものだ。マッカーシーがスタンフォード大学人工知能研究所へ転任するのに伴い、MIT のハッカーたちはこの言語を磨き上げて MACLISP という名の方言を作り出した。MAC とは、DARPA より資金提供され、AI ラボとコンピュータ・サイエンス研究所を創設することになった研究プロジェクト、プロジェクト MAC のことを指している。AI ラボの大物ハッカー、リチャード・グリーンブラットを先頭に、1970 年代後期の AI ラボのプログラマたちは、Lisp が効率的で都合良く走ることに特化したコンピュータ、Lisp マシンを設計し、そのための完全に Lisp ベースのオペレーティング・システムを開発した。

1980 年までに、ハッカーの二つのライバルグループが、Lisp マシンのコピーを製造販売する二つの会社を設立した。グリーンブラッドは、Lisp マシン社（Lisp Machines Incorporated）を始めた。彼は外部からの投資を避けて「ハッカーの会社」を作ることを計画していた。大部分のハッカーは、従来型のスタートアップであるシンボリクス社（Symbolics）に参加した。1982 年には、彼らは MIT で働くことをすっかりやめてしまった。

専念してくれるハッカーがほとんどいなければ、プログラムやマシンの修復にはもっと時間がかかる、つまり、それはちっとも修復されないということだった。ストールマンによれば、さらに悪いことにラボの「人口構造の変化」が起きた。かつて AI ラボで発言力のある少数派だったハッカーはその地位を失い、その一方で、「（PDP-10を）心から愛していない教授や学生が今までにないくらいの多数派になってしまった。」@<fn>{5}

1982 年、AI ラボは 12 歳を過ぎていたメイン・コンピュータの PDP-10 を交代させた。デジタル社（Digital）の最新モデル、デックシステム 20 は、ユーザーのプログラムの互換性を持っていたが、もしハッカーが同じオペレーティングシステムで走らせ続けたければ、思い切った書き直し、つまり、ITS の「移植」が必要だった。恐ろしいことに、研究所は所内でプログラミングの才能のある人間の必要数を既に失っていて、そのため、AI ラボの教授陣はデジタル社の開発したオペレーティング・システム、Twenex を強要してきた。多勢に無勢、ハッカーには承諾する選択肢しかなかった。

「『システムを管理するハッカーがいなければ大惨事になる。商用ソフトウェアを使うべきだ』と（教授陣は）言うのです。」ストールマンは数年後にこう振り返っている。「『会社がシステムを保守してくれることを期待できる』と言っていました。それで彼らは完全に間違っていると分かったけど、商用ソフトウェアを使うことになりました。」@<fn>{6}

最初、ハッカーたちは Twenex システムも打倒されたがっている、もう一つの権威のシンボルと見ていた。システムの名前自体が異議の申し立てだった。公式には DEC が TOPS-20 と名付けていたが、それは DEC が PDP-10 用に販売していた商用オペレーティングシステム、TOPS-10 の後継だった。ボルト・べラネク・ニューマンは TOPS-20 の元になったその改良版を開発して、それを Tenex と名付けていた。@<fn>{7} Twenex という呼び名を考案したハッカーのストールマンは、TOPS-20 という名前を使わないで済むようにその呼び名を思いついたのだという。「システムはトップと呼ぶにはほど遠かったから、そんな名前で呼ぶしかなかったんです」とストールマンは回想している。「それで、Tenex という名前に『ｗ』を一つくっつけて、Twenex と呼ぶことにしました。」

Twenex/TOPS-20 システムを動かしているマシンにも、冷笑的な意味の『オズ』というあだ名があった。ハッカーの伝説の一つによれば、マシンにそのあだ名が付いたのは、端末に電力を供給するのにより小さい PDP-11 が一台必要だったからだ。あるハッカーが、KL-10 と PDP-11 のセットアップを初めて見たときに、それを映画『オズの魔法使い』の中の大げさな魔法使いの登場場面になぞらえた。「我こそは偉くて強いオズ」、そのハッカーは歌った。「コンソールのうしろの PDP-11 を気にすることはない。」@<fn>{8}

最初に KL-10 に遭遇したハッカーが笑ったとしても、Twenex と遭遇したときに、笑いはすぐに消えてしまっただろう。Twenex は備えているセキュリティを強化したばかりか、システムのソフトウェア・エンジニアは、セキュリティに配慮してツールやアプリケーションを設計していた。コンピュータ・サイエンス研究所のセキュリティシステムとのパスワードを巡るいたちごっこが、今やシステム管理を巡る徹底抗戦になった。システム管理者は、セキュリティ対策を施さなければオズのシステムはより頻繁に不測のクラッシュに見舞われると主張していた。ハッカーたちは、クラッシュはソースコードを徹底的に見直すことで回避できると主張した。しかし、残念ながらそのような総点検を実行する時間とやる気のあるハッカーの数はシステム管理者の主張が通ってしまうほど減少していた。

当初の政策は、ラボのメンバーであれば誰でもセキュリティ制限をバイパスする「実力者特権」を持つことができるというものだった。しかし、「実力者特権」を持つ者は他の者のそれを奪うことができた。奪われた者はその特権を復活できない。この状況は、ある小グループのハッカーに、彼らを除く全員の「実力者特権」を取り消すことによる完全なコントロールを掌握する誘惑を与えた。

パスワードを入手し、起動中にデバッガーを適用し、ストールマンはこれらの企てをうまく失敗させていた。二度目の「クーデター」を失敗させた後、ストールマンは AI ラボの全員に対して警報を発した。@<fn>{9}

「また権力を握ろうとする試みが行われた」とストールマンは書く。「これまでのところ、貴族的勢力は敗北している。」アイデンティティを守るため、ストールマンはメッセージに「自由オズ放送」と署名した。

変装は、せいぜい少しやってみましたといった程度のものだ。1982 年までにストールマンのパスワードと秘密主義嫌いは広く知れ渡っていたため、AI ラボの外にいたユーザーは ARPAnet を利用するのに彼のアカウントを踏み台として利用していた。ARPAnet は、研究助成金を支給されて今日のインターネットの基盤となったネットワークである。1980 年代始めのこの手の「観光客」の一人で、ハッカーの情報網を通じてどの部外者も MIT ご自慢の ITS システムにアクセスするには RMS というイニシャルと、システムからパスワードが要求されれば同じ三文字を入力すればいいと知っていた者の一人に、カリフォルニアのプログラマ、ドン・ホプキンス（Don Hopkins）がいる。

「MIT が私やその他大勢に MIT のコンピュータを自由に使わせてくれたことを、私は永遠に感謝しますよ」とホプキンスは言う。「大勢の人間にとって、それは大きなことだったのです。」

ITS 時代には MIT の管理者側も大目に見ていたこのいわゆる「観光客」ポリシーは、@<fn>{10}  研究所の ARPAnet へのプライマリ・リンクがオズになってからは失われた。当初はストールマンも仲間が後から同じ手順で入れるようにログイン ID とパスワードを同じにするポリシーを続けていた。しかし、オズの脆弱さのため、時間が経つにつれ、全くの偶然あるいは悪意をもってシステムをダウンさせるかもしれない部外者たちを閉め出すように管理者たちは動いた。この管理者たちから自分のパスワードを公開することを最終的に止めるよう求められると、ストールマンは自分の倫理観を盾にしてそれを拒み、オズを使うことも一緒に止めてしまった。@<fn>{11}

「MIT の AI ラボに初めてパスワードが登場した（ときに）、僕は自分の信念に従ってパスワードなしにする（ことを決めました）。」後に、ストールマンは語るだろう。「なぜなら、コンピュータにセキュリティを施すのが本当に望ましいことだとは信じられませんでした。ぼくがセキュリティ体制を喜んで手助けする筋合いではなかったのです。」@<fn>{12}

ストールマンが巨大で強力なオズに従うのを拒絶したことは、1980 年代初期のハッカーと AI ラボの管理者との間に高まっていた緊張の現れだが、この緊張はハッカーのコミュニティ自身の内部で起きていた対立と比較すると色褪せてしまう。KL-10 の到来までに、ハッカーのコミュニティは既に二つの陣営に分裂していた。LMI 社とシンボリクス社である

シンボリクス社は、外部からの投資資金を使って多方面の AI ラボハッカーを募り、AI ラボの保護の外にある Lisp マシン・オペレーティングシステムのパーツを改良する仕事に配置した。1980 年の終わりまでに、Lisp マシンの自社ヴァージョンを開発するために 14 人の AI ラボ職員をパートタイム・コンサルタントとして雇った。残る少数は、ストールマンを別とすれば、LMI 社のために働いた。@<fn>{13} ストールマンは、プレッシャーのない AI ラボの生活を選び、どちらかの側に立つことを望まず、どちらの会社にも参加しないことに決めた。

最初は、他のハッカーたちは彼らの時間の一部を MIT で使い続け、MIT の Lisp マシン・オペレーティングシステムに貢献した。LMI 社とシンボリクス社はどちらも MIT からこれのコードをライセンスされていた。ライセンスは、両者が加えた変更について MIT に報告することを求めていたが、MIT にこれらの変更を再配布させることを求めていなかった。しかし、1981 年までは、それを許諾するという紳士協定が守られていて、彼らによる全てのシステムの改良は MIT ヴァージョンに含まれたので、Lisp マシンの全ユーザーが共有した。この状況は、MIT で両社がまだ中立的であるようにしていた。

ストールマンは 1982 年の 3 月 16 日という日付をよく覚えている。その日は彼の誕生日で、シンボリクス社の役員たちがこの紳士協定を終わらせることに決めた日だからだ。動機は LMI 社に対する攻撃だった。LMI 社が抱えるハッカーは少なく、全体の職員の数も少ないから、システムコードの改良を共有する主な利益は LMI 社が得ているのだとシンボリクス社の役員は考えた。彼らは、システムコードの共有を終わらせて、LMI 社を全滅させることを望んだ。そこで、シンボリクス社は、ライセンスに記された文字の力を行使することにした。LMI 社が利用できる、MIT ヴァージョンのシステムに彼らの改良を貢献するかわりに、MIT で走らせるユーザーのためには、シンボリクス社ヴァージョンのシステムを提供した。それを使った者は誰であれ、シンボリクス社にのみ検査のサービスを提供でき、もしも改良したときには、十中八九それらもシンボリクス社のためにのみ役立てられるだろう。

ラボの Lisp マシンを最新の状態に保つ責任のある（最初の二ヶ月間はグリーンブラットに手伝ってもらった）人間として、ストールマンは激怒した。シンボリクス社のハッカーは数百の未完成コードを残していて、それはエラーを引き起こした。発表を「最後通牒」と見なした彼は、シンボリクス社から研究所へのマイクロ波通信を切断して対抗した。それからシンボリクス社のマシンでは決して作業しないと宣言し、即刻 LMI 社への忠誠を誓った。「僕の見方では、AI ラボは第二次大戦のときのベルギーのような中立国です。」とストールマンは言う。「ドイツがベルギーに侵略してきた場合には、ベルギーはドイツに宣戦布告して英仏に味方するんですよ。」

彼らの最新機能が依然として MIT の Lisp マシンのシステムに出現し、ひいては、LMI 社の Lisp マシンにもあることを知ったシンボリクス社の役員は気に入らなかった。ストールマンは著作権法の規定が何を求めているのか知っていたので、スクラッチから機能を書き直した。彼は問題点の理解と改良のために、シンボリクス社が MIT に供給するソースコードを読む機会を利用し、そして、彼の加えた変更が全く別のやり方になることを[確実にし/確かめ]た。しかし、シンボリクス社の役員はこれが信じられなかった。彼らはストールマンのコンピュータ端末に「スパイ用」プログラムをインストールして、ストールマンに不利な証拠を探そうとした。しかし、MIT 当局を 1983 年初頭に彼らが訴えたとき、彼らは何の証拠も提出することができなかった。ソースの変更個所が1ダースあれば、両者のヴァージョンに同様に出現した。

AI ラボの管理者がシンボリクス社のずさんな状況証拠をストールマンに示したときに、彼はそれを否定して、類似性は実際にはフォークよりも前にあったものの残存であることを示した。そして、彼はロジックを指摘した。もしも、彼の書いた数千行を持ち出した後で、これ以上、シンボリクス社がましな証拠を出せないなら、コピーを避けるためのストールマンの入念な努力は有効だったとそれが証明したことになるのだ。AI ラボはストールマンの仕事を賞賛し、1983 年の終わりまで彼はそれを続けた。@<fn>{14} それでも、彼は実践の仕方を変更した。「完全に安全でいるために、もう向こうの[新機能や主な変更の]ソースコードは読まなくなりました。ドキュメントだけを使い、そこからコードを書いたのです。」最も大きな新機能のためには、シンボリクス社が文書をリリースするのを待っているよりも、それらを自分で設計して、その後、シンボリクス社の文書が出たときに、その機能のためのシンボリクス社のインターフェイスとの互換性を追加した。それから、彼らが直したマイナーバグを見つけるためにシンボリクス社のソースコードの変更を読み、それらを違うやり方で直した。

経験はストールマンの決心を強化した。ストールマンはシンボリクス社の新機能を置き換えるための設計をしながら、AI ラボが MIT システムを使い続けるために、バグレポートが途切れないようにする AI ラボのメンバーからの援助も得ていた。MIT は、LMI 社が直接変更点にアクセスできるようにすることを継続していた。「何が何でも、シンボリクスを懲らしめてやるつもりでした。」とストールマンは語っている。そんな発言から分かることがある。それらはストールマンの非平和主義的な性格に光をあてるだけではなく、衝突が引き金をひいた強い感情のレベルも反映している。

絶望が深かったのは、ストールマンがこれを「我が家」に対する「破壊」と見なしていたせいだ。つまり、AI ラボの結束の固いハッカーのサブカルチャーの終わりである。後にレヴィとの電子メールによるインタビューで、ストールマンは自分を歴史上の人物、1860 年代から 70 年代にかけてのインディアン戦争で絶滅させられた太平洋岸北西部のヤヒ族の最後の生き残り、イシになぞらえた。この喩えではストールマンの生き残りは叙事詩やほとんど神話のような役回りだ。@<fn>{15} シンボリクス社のために働いているハッカーはそれを違う風に見ていた。シンボリクス社を皆殺し勢力と見るかわりに、多くのストールマンの同僚はそれを遅すぎた妥当な試みとして見ていた。Lisp マシンの商品化の過程で、会社は、エンジニア主導のソフトウェア・デザインというハッカー方式を AI ラボという象牙の塔の境界を越えて企業の市場へと押し出した。そこでは経営者主導の方式が君臨していた。抵抗としてストールマンを見るより、多くのハッカーは時代遅れの実践の代表として彼を見ていた。

個人的な敵意も状況に影響していた。シンボリクス社が AI ラボ職員のハッカーの大半を雇って連れ去っていく前ですら、後にシンボリクス社に参加するハッカーの多くは彼を避けるようになっていたとストールマンは言う。「チャイナタウンに行くときに、もうぼくを呼ばなくなりました」とストールマンは回想する。「グリーンブラッドが始めた習慣では、誰かがディナーに出かけるときは、ラボの誰かで他に行きたい者はいないかと聞いて回るか、メッセージを送るということになっていました。1980年か1981年のあるときから、それが来なくなりました。彼らは僕を招かないだけじゃなくて、後に告白されたんですが、僕ぬきでディナーに行っているのを秘密にするように嘘をつく圧力がかかっていたそうです。」

ストールマンは、この村八分のけちな方法に気持ちを傷つけられたものの、そこには何もなすべきことはなかった。シンボリクス社の最後通牒は、問題を個人的な拒絶から広い範囲に及ぶ不正に変えた。ライバルを倒す手段として、シンボリクス社がそのソースコードの変更の再配布をまったく許さないことにしたとき、ストールマンは、シンボリクス社の目標を挫折させる決心をした。ストールマンは、MIT のオフィスにこもり、ソフトウェアのどの新しい機能にも改善にも同等のものを書くことにより、シンボリクス社のユーザーと同じ機能へのアクセスを、LMI 社のユーザーを含む、MIT システムのユーザーに与えた。

また、それはハッカー・コミュニティでのストールマンの地位を伝説的なものにした。すでに Emacs の仕事で名声を得ていたが、シンボリクス社のプログラマ全体のチーム - その中にはすでに伝説的なハッカー数名が含まれていた - の成果に匹敵するストールマンの能力は、情報時代における、更に言えば、どんな時代であれ、最大級の人間の才能である。それを「マスター・ハック」と呼びストールマン自身を「コンピュータ・コードのヴァーチャル・ジョン・ヘンリー」と呼んだハッカーズの著者のスティーヴン・レヴィは、シンボリクスに雇われたライバルの多くが、理想主義的なかつての同志に対して嫌々ながらも敬意を払うほかなかったことを注記している。結局、シンボリクス社で働くことにしたハッカーで、会社のパロ・アルトのオフィスにいたビル・ゴスパー（Bill Gosper）の、この時期のストールマンの成果に対する驚きの表明をレヴィは引用している。

//quote{
ストールマンが書いたものを見て、それは駄目だと決めつけることができたかもしれません（おそらく違うが、誰かがそれは駄目だと信じ込ませることができたかもしれない）。そうだとしても、「しかし、ちょっと待った。あちらじゃ、ストールマンは一晩中誰とも議論していないんだ。一人で働いているんだぜ！これを一人でやれるなんてことは信じられない！」と言ったでしょう。@<fn>{16}
//}

ストールマンにとって、シンボリクス社に追いついて肩を並べる役割を演じていた日々は、誇りと深い悲しみの入り混じった感情を呼び起こした。第二次世界大戦を戦った父親を持つ、生粋のリベラルの一人としてのストールマンは、平和主義者ではなかった。色々な意味で、シンボリクス戦争は十年前に AI ラボのスタッフに加わって以来のストールマンのキャリアに通過儀礼を提供していた。しかし、それはストールマンを十代の頃から養ってきた AI ラボのハッカー文化のトラウマ的な破壊と同時に起きた。ある日、コードを書くのを一休みしていたときに、ラボの機器室でトラウマ的な時間が過ぎて行くのをストールマンは経験した。ストールマンはそこで図体の大きな使われなくなった PDP-10 マシンに遭遇した。眠っているようなライトにぎくっとした。かつては内部のプログラムの状態を表示するために黙ってコードを活動的に点滅していたライトだった。ストールマンは、愛する家族の一員の、良く保存されたミイラに出会ったのと感情的インパクトは変わらなかったと言う。

「機器室で泣いてしまいました。」とストールマンは言う。「そこにあるマシンが死んでいるのを見ていました。誰もフィクスする者はなくなって置き去りにされて、完全にコミュニティは破壊されてしまっているのを見ていたのです。」

ストールマンに悲しんでいる時間はほとんどなかった。それが巻き起こした熱狂と製作に注ぎこまれた苦労の全てにもかかわらず、Lisp マシンは、テクノロジー市場における大規模な戦闘の前哨戦に過ぎなかった。コンピュータの小型化の無慈悲な速度は、より新しくより強力なマイクロプロセッサを運んできた。まもなくそれは、現代的都市が古代の砂漠の村落を飲み込んで行くようにして、マシンのハードウェアとソフトウェアの能力を統合していくだろう。

何十万もの占有的ソフトウェア・プログラムがこのマイクロプロセッサの波に乗ったが、どれもユーザー・ライセンスのパッチワークと非開示契約（NDA）で保護されていた。それはハッカーがソースコードをレヴューしたり共有したりするのを不可能にするものだった。ライセンスは粗雑で不釣り合いなものだったが、1983 年までに、法廷を満足させるのに十分な程度に強力な、もぐり業者を追い出せるほどのものになった。かつては、高価なコンピュータ・システムという料理をよりおいしくする付け合わせの一品だったが、ソフトウェアは、すぐにメイン・ディッシュになった。新しいゲームや機能に飢えたユーザーは、毎食後にレシピをレヴューする伝統的要求には注意を払わなかった。

パーソナル・コンピュータ・システムの領域ほど、この状況が明白なところはなかった。アップル・コンピュータ（Apple Computer）やコモドール（Commodore）は、組み込みのオペレーティング・システムのマシンを売ることによって、新たな百万長者を送り出し続けていた。
ハッカー文化とハッカー文化がバイナリのみのソフトウェアを嫌うことは気付かれることがなく、パーソナル・コンピュータのユーザーの多くは会社がソースコード・ファイルの添付をやめることにしたときにそれに抗議する必要があるとはほとんど思わなかった。ハッカー倫理の無政府的信奉者でこの新しい市場にその倫理を持ち込もうとした者も少しはいた。しかし、たいていの場合、市場は新しいプログラムを書くのに十分な報酬を素早くプログラマに支払い、十分に抜け目なく、ハッカー倫理をすっかり閉め出すエンド・ユーザー・ライセンス契約をそれらにつけた。

これらのプログラマの中で最も悪名高い人物の一人がビル・ゲイツ（Bill Gates）、ストールマンより二歳年下のハーヴァードのドロップアウトだ。その当時ストールマンは知らなかったが、ストールマンがメッセージを net.unix-wizards に送る七年前、ゲイツは、ソフトウェア開発者のコミュニティに自ら書いた公開状を送っていた。ゲイツは芽を出しかけた起業者で、アルバカーキに本社を置くソフトウェア企業、マイクロソフト（Micro-Soft; のちに、Microsoft へ綴りを変更）の共同経営者だった。PC ユーザーのマイクロソフトのソフトウェア・プログラムのコピー行為に対する反応として書かれた、ゲイツの「ホビイストへの公開状」は、共有的なソフトウェア開発の観念を激しく非難した。

「見返りなしでプロフェッショナルな仕事をする余裕が誰にあるだろうか。」とゲイツは問いかける。「プログラミングに三人年かけ、すべてのバグを発見し、製品を文書化して、無料で配布できるのは、どんなホビイストだろうか。」@<fn>{17}

AI ラボのハッカーは、ほとんど誰もその公開状を見ていなかったが、ゲイツの 1976 年の公開状は、商業的なソフトウェア企業と商業的なソフトウェア開発者の、双方のソフトウェアに対する態度の変化を反映していた。市場が違うことを言っているときに、どうしてソフトウェアをゼロ・コストの商品として扱うのか。1970 年代が 1980 年代に取って代わられるとき、ソフトウェアの販売は費用の回収以上のものになった。それは政治的声明になった。レーガン政権が、大不況に続く半世紀の間に構築された連邦規制と支出プログラムの多くを廃止していったときに、少なくない数のプログラマがハッカー倫理を反競争的なもの、ひいては非アメリカ的なものと見ていた。せいぜい、それは 1960 年代後半と 1970 年代初期の反企業的態度の復活だった。フレンチ・カフスのシャツとダブルのスーツの間に古い絞り染めのシャツが隠れていたのを見つけたウォールストリートの銀行家のように、多くのコンピュータ・プログラマは、ハッカー倫理を理想主義的な時代を思い出させる気恥ずかしいものとして扱っていた。

1960 年代全部を 1950 年代の復活に費やして過ごした人間として、ストールマンは同僚と一致しないことを気にかけなかった。しかし、ストールマンは、最良のマシンと最良のソフトウェアで仕事をしてきたプログラマとして、彼が「率直な道徳的選択」と説明するほかなかったものに直面していた。すなわち、「占有的」ソフトウェアに反対することをあきらめるのか、それとも、非占有的なソフトウェア・プログラムのシステムという別の選択肢の構築に自分の人生を捧げるのか、という選択である。占有的（proprietary；プロプライエタリ）ソフトウェアというのは、ストールマンや彼の仲間のハッカーが、コピーや修正を制限する著作権の条件やエンドユーザーライセンスがついた一切のプログラムを記述するために使っている用語である。シンボリクス社との厳しい試練の月日を経験した彼にとって、後者のオプションがより心地良く感じられた。「コンピュータを使うことをすっかりやめてしまうこともできたと思います。」とストールマンは言う。「ぼくは特別な技能がありません。しかし、ウェイターになることはできたはずです。たぶん、しゃれたレストランではありませんが、どこかでウェイターになることはできました。」

ウェイターをするというのは、つまり、プログラミングをすっかりドロップアウトしてしまうことで、それはコンピュータ・プログラミングの活動を完全に諦めることを意味しただろう。それは彼に本当に多くの喜びを与えてきたものだった。ケンブリッジに引っ越して来て以来の人生を振り返り、ソフトウェア・プログラミングが唯一の喜びを提供していた長い時期を容易に特定できることにストールマンは気付いた。ドロップアウトするよりも、ストールマンは最後まで貫くことに決めたのだった。

無神論者のストールマンは、例えば、人生における宿命、ダルマ、天命といった観念を否定する。それにもかかわらず、占有的ソフトウェアを遠ざけて、他人も同じことをするのを助けるオペレーティング・システムを構築する決心をするのは、自然な決心だと彼は感じている。結局、それはストールマン自身の、頑固さ、先見性、コーディングの名人芸の個人的結合で、それは他の誰もが、存在するとは殆ど知らなかった道の分岐点に彼を思い至らせたのだ。1999 年の本、『オープンソース』のある章の中で彼の決心について記述して、ストールマンは、ユダヤの聖人ヒレルの言葉に要約された気持ちを引用している。

//quote{
もしも、私が私自身のためにいるのでなければ、誰が私のためにいるのだろうか。もしも、私が私自身のためにのみいるのだというなら、私は何なのだろうか。もしも、今でなければ、いつだというか。@<fn>{18}
//}

聴衆に語りかけるとき、ストールマンは、宗教的なルートを避け、プラグマチックな言葉で決心について表現する。「自問してみました。一人のオペレーティング・システムの開発者が、状況を改善するために何ができるだろうか。疑問を吟味してみると、問題を解決するのに必要とされているのは、まさに一人のオペレーティング・システム開発者だと悟るまで、それほど時間はかかりませんでした。」

ひとたび、その認識に達すると他の全てのことは「落ち着くところに落ち着いた。」とストールマンは言う。1983 年に、MIT はシンボリクスから第二世代の Lisp マシンを入手しようとしていた。その上では、おそらく MIT の Lisp マシン・システムは走らなかった。ひとたび、大半の MIT マシンが置き換えられてしまったら、ユーザーのバグ報告の不足で効率的にシステムを維持し続けることはできない。彼は止めねばならなかった。しかし、彼は止めることを欲してもいた。MIT の Lisp マシン・システムは、自由ソフトウェアではなかった。ユーザーはソースコードを入手することさえ可能だったものの、それを自由に再配布することはできなかった。さしあたり、MIT システムの存続という目標はすでに達成されていた。LMI 社は生き残り、LMI 社自身のソフトウェアを開発し続けていた。

ストールマンは、彼の古いコミュニティを破壊した者たちを罰することに人生を全部使いたくなかった。彼は新しいコミュニティを建設したかった。彼は彼の倫理的信条に妥協を求めるソフトウェアを公然と非難し、彼と他の人間がその拘束から脱することを容易にするプログラムを創り出すことに決めた。自由ソフトウェア・オペレーティング・システムの構築を誓約しながら、「さもなくば、死か。もちろん、年とってからね」とストールマンは皮肉を言い、1984 年 1 月に GNU を構築するために MIT の職員を辞めた。

辞職は、ストールマンの仕事を MIT の法的庇護から遠ざけた。それでも、ストールマンは、MIT の施設を使い続けるとともに、後には、自分のオフィスを保有するのに十分な友人と同盟者を AI ラボの中に持っていた。また彼は、初期段階の GNU プロジェクトの費用を賄い、安心なものにするためのコンサルタント業務を外部でする能力も持っていた。しかし、MIT を辞職することによって、ストールマンは、利益相反関係や研究所のソフトウェア所有権に関するいかなる議論も無効化した。大人になる頃は社会的孤立の恐れから AI ラボの抱擁の中へますますのめりこんでいった男は、今や、彼自身とその環境との間に法的なファイアウォールを築いたのだ。

最初の数ヶ月間、ストールマンは Unix のコミュニティからも同様に孤立して作業した。net.unix-wizards グループへの彼の告知は共感的反応を呼んでいたにもかかわらず、初期段階で十字軍への参加に応じる有志はほとんどいなかった。

「コミュニティの反応は、だいたい一致していました。」と当時の Unix ユーザー・グループのリーダーだったリッチ・モーリンは回想する。「『おお、それは素晴らしいアイデアだね。コードを見せてくれよ。それができると示してくれよ。』とみんなで言っていたのです。」

仕事は膨大であることが分かっていたストールマンは、可能であれば、どこにあるものであろうと、既存の自由ソフトウェアの再利用を試みることに決めた。そのため彼は GNU プログラムとツールに転換できる既存のプログラムとツールを探し始めた。最初の候補の一つが VUCK という名前のコンパイラだが、それは人気のあるプログラミング言語 C で書かれたプログラムをマシンで走行可能なコードに転換するものだった。オランダ語から翻訳すると、プログラムの頭字語は自由大学コンパイラ・キットを表現していた。楽観的なストールマンは、プログラムの著者にプログラムは自由ですねと質問した。著者が、「自由大学」の言葉はアムステルダムにあるVrije Universiteit（自由大学）をさしているのだと告げたとき、ストールマンは悔しかった。

「彼は馬鹿にした調子で『大学は自由です。しかし、コンパイラは自由じゃない。』と返事をよこしました。」とストールマンは回想する。彼は助けるのを断ったばかりか、GNU を開発する計画から手を引いて、そのかわりに VUCK の販売の強化になるアドオンでも書いたらどうかとストールマンに提案した。見返りに利益を分けるという。「だからこそ、GNU プロジェクトのためのぼくの最初のプログラムは、マルチ言語、マルチプラットフォームのコンパイラにしようと決めました。」@<fn>{19}

VUCK のかわりに、ストールマンは、ローレンス・リバモア国立研究所（Lawrence Livermore National Lab）のプログラマが書いた、パステル（いかがわしいパスカル）・コンパイラ（the Pastel compiler）を見つけた。彼らの言によれば、ストールマンにプログラムを贈ったときにコンパイラはコピーや修正が自由だった。不運にも、プログラムはジョブに適さなかった。なぜなら、そのメモリ要件は巨大だったのだ。それは入力された全ファイルをコア・メモリーで構文解析した。そしてコンパイルし終えるまで全ての内部データを保持し続けた。メインフレーム・システムでは、この設計は許容された。Unix システムでは機能を喪失させる障害だった。Unix を走らせる 32 ビットのマシンでさえ、しばしば、プログラムにそれだけのメモリーを提供できなかったからだ。ストールマンは、当初、コンパイラに C 互換のフロントエンドを構築して、それを大きなメモリー空間を扱えるシステムである、より大きな Vax でテストして、かなり作業を進めていた。彼は、68010 にシステムを移植しようとしたときに、なぜそれがクラッシュしたかを調べて、メモリーの大きさの問題を発見した。そして、すっかり新しいコンパイラをスクラッチから構築する必要があるという結論に達した。ストールマンは、結局、これをやった。GNU C コンパイラ、すなわち、GCC である。しかし、1984 年には、コンパイラについて何をすべきか明らかではなかった。そこで、GNU の他の部分に集中している間に、それらのプランが固まっていくのにまかせようと決めた。

かくして、ストールマンは、1984 年の秋に Emacs の GNU ヴァージョンの開発を始めた。彼自身が十年にわたって監修してきたプログラムだ。Unix コミュニティに、二つあるネイティブのエディタ・プログラムは、サン・マイクロシステムズの共同設立者のビル・ジョイ（Bill Joy）の書いた vi と、ベル研究所の科学者（そして Unix の共同創作者）のケン・トンプソン（Ken Thompson）の書いた ed だった。どちらも便利で人気があったが、どちらも、Emacs の際限なく拡張可能な性質は提供していなかった。

当時を振り返ってストールマンは、戦略的条件の観点から見ていたのではなかったと言う。「Emacs が欲しかったんです。開発をする良い機会でした。」

ここでもまた、ストールマンは時間を節約することを望んで既存のコードを見つけていた。Emacs の Unix ヴァージョンを書くにあたって、まもなく、ストールマンは、ゴスリング Emacs とか GOSMACS と名付けられた、Emacsの C をベースにしたヴァージョンの作者であるカーネギー・メロンの大学院生、ジェームス・ゴスリング（James Gosling）の踏み跡をたどって行った。Emacs のゴスリングのヴァージョンは、MOCKLISP と呼ばれる簡略化した lisp 言語の派生物を利用したインタープリタを含んでいた。ゴスリングは、GOSMACS を著作権の下に置き、個人的に所有しているソフトウェア会社、ユニプレス社にその権利を売却していたが、ストールマンは、初期の MOCKLISP インタープリタに参加していた仲間の開発者の保証を援用していた。その開発者によれば、ゴスリングはカーネギー・メロンの博士課程の学生だったときに、コードへの貢献と引き換えに、協力者自身の GOSMACS のヴァージョンの配布の許可を電子メールで与えていた。

当初、ストールマンは、オリジナルの PDP-10 Emacs との完全な互換性を実装するために、ユーザーレベルのコマンドだけを変更しようと思っていた。しかし、実際の Lisp と比較すると Mocklisp がいかに非力かが分かって、彼はそれを本物の Lisp システムと置き換えざるをえないと感じた。これは当然ながら、Gosmacs のハイレベルコードの大半を、Lisp のより強力な力と柔軟なデータ構造を生かして、全く違ったやり方で書き直させるものだった。1985年の中頃までに、インターネットでリリースされた GNU Emacs の中には、ほんの幾つかのファイルに Gosmacs からの残りコードがあるだけだった。

ユニプレス社はストールマンのプロジェクトに気付き、他の開発者が独自ヴァージョンの Gosmacs を配布する許可を受けていることを否認した。その開発者は自分の主張を裏付ける古い電子メールのコピーを見つけることができなかった。ストールマンは、この問題を Gosmacs から残っていた僅かなモジュールを置き換えるものを書いて解消した。

しかし、それでも、開発者によるソフトウェアの権利の売却という観念や、そもそも開発者にソフトウェアを売る権利があるという観念に、ストールマンは腹が立った。1986 年のスウェーデン王立工科大学での講演で、ストールマンは、占有的ソフトウェアに伴う危険性のもう一つの例としてユニプレス社の事件を引用している。

「時々、思うことがあるんです。ひょっとして、自分の人生でできた最善のことは企業秘密になっている占有的ソフトウェアを大量に見つけて、そのコピーの街頭配布を開始することなんじゃないだろうか。そうすれば、企業秘密なんかじゃなくなってしまう。」とストールマンは言った。「ひょっとして、実際に自分で書いた新しい自由ソフトウェアを人にあげるよりも、自分にとってもっと効率的なんじゃないだろうか。しかし、怖いからそれは誰も受け取ることさえできません。」@<fn>{20}

そのストレスにもかかわらず、ゴスリングのコードに関する論争は、長期的には、ストールマンと自由ソフトウェア運動の両方を助けることになる。それは問題のある派生物の出現を可能にしていた Emacs コミューンの弱点とインフォーマルな信頼のシステムの弱点にストールマンが取り組むことを強いた。それはまた、自由ソフトウェア運動の政治的目標を明確にすることをストールマンに強いた。1985 年の GNU Emacs のリリースに続いて、ストールマンは、1983 年 9 月に投稿したオリジナルの声明を拡大した「GNU 宣言」を発表した。ストールマンは、占有的ソフトウェア・プログラムの横行を正当化するために商業的プログラマやアカデミックなプログラマが使っている多くの議論を扱った長い章をその文書の中に含めた。その中の「プログラマは創造性で報酬に値するのではない」という論考は、少し前のゴスリンEmacsのエピソードに関するストールマンの怒りを要約した回答を提供している。

「もしも報酬を受けるに値するものが何かあるとすれば、それは社会的な貢献である。」ストールマンは書いた。「創造性は社会的貢献でありうる。しかし、それは社会がその結果を自由に使える限りにおいてのことだ。もしもプログラマが技術革新的プログラムの創造により報酬を受けるに値するとすれば、同じ理由により、もしもこれらのプログラムの使用を制限するならば、罰せられるに値するのである。」@<fn>{21}

GNU Emacs のリリースとともに、GNU プロジェクトはついに見せることのできるコードを持った。それはまた、いかなるソフトウェア・ベースの会社にとっても心配の種だった。Unix 開発者がそのソフトウェアを楽しみ始めるにつれて、お金、贈り物、そしてテープの注文が殺到し始めた。GNU プロジェクトのビジネスの面に取り組むべく、ストールマンは仲間から何人かを選抜して、自由ソフトウェア財団（FSF; Free Software Foundation）、GNU プロジェクトをその目標に向かって加速するための非営利組織をたちあげた。ストールマンを理事長、変化に富むハッカーの同盟者を理事として、FSF は、GNU プロジェクトの法人的側面を提供する役目をした。

ロバート・シャッセル（Robert Chassell）は、Lisp マシン社で働いていたときに、ストールマンとディナーで話をした後、自由ソフトウェア財団の五人の設立委員の一人になったプログラマだ。シャッセルは、財団の会計も担当している。その役割は始めたときは小さかったが、すぐに大きくなった。

「85年の支出と収入は、全体でおよそ 23,000 ドル程度だったと思います。」とシャッセルは回想する。「リチャードには自分のオフィスがあって、我々は場所を借りていました。私は何でもかんでも、とくにテープは、私のデスクの下に置いていました。しばらくして、テープやその手のものを保管できる場所を LMI 社が貸してくれたんですが、それでもそうしていましたね。」

自由ソフトウェア財団は、面の提供に加えて、中心も、幻想から醒めた他のプログラマたちのための重力の中心も提供した。非常に平等な関係に見えていた Unix 市場は、ストールマンが最初の GNU の発表をしたときでさえ、ますます競争的になっていた。顧客の繋ぎ止めを強化しようとして、会社は、Unix のソースコードへのアクセスを閉ざし始めていた。進行中の GNU ソフトウェア・プロジェクトへの照会をただ加速するばかりの形勢である。かつてはストールマンをやかましい変人だと思っていた Unix のウィザードたちは、自分が突き止めた問題から自由になることへの希望または絶望に応じて、今や、ストールマンをソフトウェアの預言者またはソフトウェアのカッサンドラとして見始めていた。

「多くの人は、自分の身に起きるまで気が付きません。奪われてしまうだけのソフトウェアの仕事に何年も費やしたら、どんなにがっかりさせられることでしょうか。」FSF を設立して間もない頃の寄稿者達の感情と意見を要約してシャッセルは言う。「そんなことが二度も起きると、自問し始めるんです。『おい、ちょっと待てよ。』ってね。」

シャッセルにとって、自由ソフトウェア財団に参加することを決めたのは、彼自身が経験した個人的喪失感からだった。LMI 社の前に、シャッセルはケンブリッジ地区のソフトウェア会社、カドマス社に雇われて Unix の入門書を書いていた。カドマス社が破産したときにその本に対する権利も失われてしまった。シャッセルは権利を買い戻そうとしたが成功しなかったと言う。

「私の知る限り、あの本はまだどこかの棚の上にあって、使用不可、コピー不可で、ただシステムから除外されただけになっているのです。」とシャッセルは言う。「自分で言うのも何ですが、実に良い入門書でした。三ヶ月か四ヶ月かければ、今日の GNU/Linux の入門として完全に使えるものに変換できるかもしれません。私の記憶に残っているものを別にすれば、その全経験が失われてしまったのです。」

かつての雇い主が破産と闘っている間に自分の著作が泥沼へ沈んで行くのを見ざるを得なかったシャッセルは、ストールマンを脳卒中にしそうな怒りがわかる気がしたと言う。「私にとって、一番はっきりしているのは、ちゃんとした生活をしたい人なら自分の人生の一部から閉め出されるのを望むはずがないという感覚です。」シャッセルは言う。「何かを始めて、それを完成し、そしてまた修正する自由を持っている、その何かが何であれ、この、そういう理念の全体が、本当の違いをつくりだすのです。数年かけて価値のある仕事を達成した人生の後で、幸せだったとそれは考えさせるでしょう。なぜなら、さもなければ、奪われ、放棄され、または控えめに言っても、それに関わることができなくなってしまうのです。人生の一部が失われてしまうようなものです。」

==== 後注

//footnote[1][『最初の GNU 声明』（1983年9月）リチャード・ストールマン、参照。]

//footnote[2][同書。]

//footnote[3][同書。]

//footnote[4][『バークレー Unix の 20 年』マーシャル・カーク・マクージック、「オープンソース」（株式会社オライリー・ジャパン、1999年）を参照。]

//footnote[5][リチャード・ストールマン（1986年）参照。]

//footnote[6][同書。]

//footnote[7][複数の出典を参照。リチャード・ストールマンのインタビュー、ジェラルド・サスマンの電子メール、ジャーゴン・ファイル 3.0.0 http://catb.org/jargon/html/T/TWENEX.html ]

//footnote[8][http://www.as.cmu.edu/geek/humor/See_Figure_1.txt ]

//footnote[9][リチャード・ストールマン（1986年）参照。]

//footnote[10][『MIT AI ラボの観光客ポリシー』を参照。 http://www.art.net/hopkins/Don/text/tourist-policy.html ]

//footnote[11][リチャード・ストールマン（1986年）参照。]

//footnote[12][同書。]

//footnote[13][Steven Levy, Hackers (Penguin USA \[paperback\], 1984): 423.  『ハッカーズ』スティーブン・レビー（工学社）]

//footnote[14][H. P. ニューキストの『頭脳制作者たち』が、AI ラボはストールマンに Lisp マシンプロジェクトから離れているように告げた、と言うのは誤りである。]

//footnote[15][『ハッカーズ』で、スティーブン・レヴィがこの時期を念頭に記述したときに、ストールマンを「最後の真のハッカー」としていたが、彼の意図した意味はあなたが思ったものと違ったかもしれない。レヴィは「真のハッカー」という用語を MIT のハッカー・コミュニティを他の二つのハッカー・コミュニティから区別するために使い、後者は本の中で後で解説して、別の名前を与えた。\[「真のハッカー」は第一部のタイトルでMITハッカーを指している。第二部はハードウェア・ハッカー、第三部はゲームハッカー。（訳者）\]ストールマンだけを残して、このコミュニティが溶解したとき、彼は、結果として、最後の「真のハッカー」になった。レヴィは、他の者は誰も本当のハッカーではないと言おうとしているのではない。しかし、人々は、特にレヴィの本の説明を読んでいない人々は、彼の言葉をそのように解釈する傾向がある。ストールマン自身は、レヴィの本のそれらの言葉を使って自らを形容したことはない。]

//footnote[16][Steven Levy, Hackers (Penguin USA \[paperback\], 1984): 426 日本語訳は、『ハッカーズ』スティーブン・レビー（工学社）]

//footnote[17][『ホビイストへの公開状』ビル・ゲイツ（1976年2月3日）。この公開状のオンライン上のコピーは次のサイトで見ることができる。 http://en.wikipedia.org/wiki/Open_Letter_to_Hobbyists ]

//footnote[18][次を参照。ストールマンはこの声明に脚注を加えて、「無神論者の一人として、宗教指導者に従うことはないが、彼らの中の或る者が述べた言葉に感心している自分に気付くことがある。」と書いている。 http://www.gnu.org/gnu/the-gnu-project.html ]

//footnote[19][Richard Stallman, "The GNU Operating System and the Free Software Movement," Open Sources (O'Reilly & Associates, Inc., 1999): 65.を参照。日本語訳は、「GNU システムとフリーソフトウェア運動」、リチャード・ストールマン、『オープンソース』（株式会社オライリー・ジャパン、1999 年）。]

//footnote[20][リチャード・ストールマン（1986 年）]

//footnote[21][『GNU宣言』（1985 年）リチャード・ストールマン http://www.gnu.org/gnu/manifesto.html ]
